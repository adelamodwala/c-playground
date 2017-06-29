#include <stdlib.h>
#include <stdio.h>
#define MAX_QUEUE 10

typedef struct Queue {
	int size;
	int top;
	int data[MAX_QUEUE];
} Queue;

void Queue_Print(Queue * Q)
{
	printf("{\n");

	printf("size: %d,\n", Q->size);
	printf("top: %d,\n", Q->top);
	printf("{");
	for(int i = 0; i < MAX_QUEUE; i++)
	{
		printf("%d: %d, ", i, Q->data[i]);
	}
	printf("}\n");

	printf("}\n");
}

void Queue_Init(Queue * Q)
{
	Q->size = 0;
	Q->top = 0;
}

void Queue_Add(Queue * Q, int d)
{
	if(Q->size == MAX_QUEUE)
	{
		printf("Max size reached\n");
	}
	else
	{
		Q->data[(Q->top + Q->size) % MAX_QUEUE] = d;
		Q->size++;
		printf("Added %d at position %d\n", d, (Q->top + Q->size) % MAX_QUEUE);
	}
}

int Queue_Remove(Queue * Q)
{
	if(Q->size == 0)
	{
		printf("No items to remove\n");
		return -1;
	}
	else
	{
		int val = Q->data[Q->top];
		Q->top = (Q->top + 1) % 10;
		Q->size--;
		return val;
	}
}

int Queue_GetTop(Queue *Q)
{
	if(Q->size == 0)
	{
		printf("No items in queue\n");
		return -1;
	}
	else
	{
		printf("Top position %d has value %d\n", Q->top, Q->data[Q->top]);
		return Q->data[Q->top];
	}
}

int main()
{
	Queue * q = malloc(sizeof(Queue));
	Queue_Init(q);

	for(int i = 0; i <= MAX_QUEUE; i++)
	{
		Queue_Add(q, i);
	}
	Queue_Print(q);

	printf("Removing at index %d: %d\n", q->top, Queue_Remove(q));
	Queue_Print(q);

	printf("Removing at index %d: %d\n", q->top, Queue_Remove(q));
	Queue_Print(q);

	Queue_Add(q, 99);
	Queue_Print(q);
	Queue_Add(q, 88);
	Queue_Print(q);

	for(int i = 0; i < MAX_QUEUE - 2; i++)
	{
		printf("Removing at index %d: %d\n", q->top, Queue_Remove(q));	
	}
	Queue_Print(q);

	Queue_Add(q, 77);
	Queue_Print(q);

	printf("Removing at index %d: %d\n", q->top, Queue_Remove(q));	
	Queue_Print(q);

	for(int i = 45; i < 45 + MAX_QUEUE - 2; i++)
	{
		Queue_Add(q, i);
	}
	Queue_Print(q);

	free(q);

	return 0;
}