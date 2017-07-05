//
// Created by adel on 03/07/17.
//
#include "unity/unity.h"
#include "../src/queue.h"
#include "stdlib.h"

void test_Queue_Init_should_InitQueueCorrectly(void)
{
    Queue * q = malloc(sizeof(Queue));
    Queue_Init(q);
    TEST_ASSERT_EQUAL_INT(0, q->size);
    TEST_ASSERT_EQUAL_INT(0, q->top);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_Queue_Init_should_InitQueueCorrectly);
    return UNITY_END();
}