
#ifndef __STACK_H__
#define __STACK_H__
#include <stdbool.h>
#include <stdlib.h>

const int INITIAL_MAX;

typedef struct Stack {
     int capacity;
     int NumElements;
     int* data;
} Stack;


Stack *stack_init();

void stack_free(Stack *stack);

bool stack_empty(Stack *stack);

bool stack_isfull(Stack *stack);

int stack_top(Stack *stack);

void stack_push(Stack *stack, int k);

int stack_pop(Stack *stack);

#endif
