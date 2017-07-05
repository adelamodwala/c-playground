//
// Created by adel on 29/06/17.
//

#ifndef SIMPLE_CIRCULAR_QUEUE_QUEUE_H
#define SIMPLE_CIRCULAR_QUEUE_QUEUE_H

#define MAX_QUEUE 10

typedef struct Queue {
    int size;
    int top;
    int data[MAX_QUEUE];
} Queue;

void Queue_Print(Queue *Q);

void Queue_Init(Queue *Q);

void Queue_Add(Queue *Q, int d);

int Queue_Remove(Queue *Q);

int Queue_GetTop(Queue *Q);

#endif //SIMPLE_CIRCULAR_QUEUE_QUEUE_H
