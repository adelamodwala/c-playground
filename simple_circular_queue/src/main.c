//
// Created by adel on 29/06/17.
//

#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

int main() {
    Queue *q = malloc(sizeof(Queue));
    Queue_Init(q);

    for (int i = 0; i <= MAX_QUEUE; i++) {
        Queue_Add(q, i);
    }
    //Queue_Print(q);

    //printf("Removing at index %d: %d\n", q->top, Queue_Remove(q));
    //Queue_Print(q);
    Queue_Remove(q);

    //printf("Removing at index %d: %d\n", q->top, Queue_Remove(q));
    //Queue_Print(q);
    Queue_Remove(q);

    Queue_Add(q, 99);
    //Queue_Print(q);
    Queue_Add(q, 88);
    //Queue_Print(q);

    for (int i = 0; i < MAX_QUEUE - 2; i++) {
        //printf("Removing at index %d: %d\n", q->top, Queue_Remove(q));
        Queue_Remove(q);
    }
    //Queue_Print(q);

    Queue_Add(q, 77);
    //Queue_Print(q);

    //printf("Removing at index %d: %d\n", q->top, Queue_Remove(q));
    //Queue_Print(q);
    Queue_Remove(q);

    for (int i = 45; i < 45 + MAX_QUEUE - 2; i++) {
        Queue_Add(q, i);
    }
    //Queue_Print(q);

    free(q);

    return 0;
}
