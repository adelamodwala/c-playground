#include <stdio.h>
#include "queue.h"

void Queue_Print(Queue *Q) {
    printf("{\n");

    printf("\tsize: %d,\n", Q->size);
    printf("\ttop: %d,\n", Q->top);
    printf("\t{");
    for (int i = 0; i < MAX_QUEUE; i++) {
        printf("%d: %d", i, Q->data[i]);
        if (i < MAX_QUEUE - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    printf("}\n");
}

void Queue_Init(Queue *Q) {
    Q->size = 0;
    Q->top = 0;
}

void Queue_Add(Queue *Q, int d) {
    if (Q->size == MAX_QUEUE) {
        printf("Max size reached\n");
    } else {
        Q->data[(Q->top + Q->size) % MAX_QUEUE] = d;
        Q->size++;
        printf("Added %d at position %d\n", d, (Q->top + Q->size) % MAX_QUEUE);
    }
}

int Queue_Remove(Queue *Q) {
    if (Q->size == 0) {
        printf("No items to remove\n");
        return -1;
    } else {
        int val = Q->data[Q->top];
        Q->top = (Q->top + 1) % 10;
        Q->size--;
        return val;
    }
}

int Queue_GetTop(Queue *Q) {
    if (Q->size == 0) {
        printf("No items in queue\n");
        return -1;
    } else {
        printf("Top position %d has value %d\n", Q->top, Q->data[Q->top]);
        return Q->data[Q->top];
    }
}