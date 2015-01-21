#include "stack.h"

const int INITIAL_MAX = 5;

Stack* stack_init(){
	Stack *stack = (Stack *)malloc(sizeof(Stack));
        stack->capacity = INITIAL_MAX;
	stack->NumElements = 0; 
        stack->data = malloc(sizeof(int) * stack->capacity);
	return stack;
}

bool stack_empty(Stack *stack){
	if (stack->NumElements  == 0){
		return true;

        }else { return false; }
}

bool stack_isfull(Stack *stack){
        if (stack->NumElements == stack->capacity){
           return true;
       }else { 
              return false;
             }
}

int stack_top(Stack *stack){
	if (stack->NumElements == 0){
	        return -1; 
       }else { return stack->data[0];}

}

void stack_push(Stack *stack, int k){
          if (stack->NumElements >= stack->capacity){   
	          stack->capacity = stack->capacity * 2;
                  stack->data = realloc(stack->data, sizeof(int) * stack->capacity);
                  stack->data[stack->NumElements] = k;    
                  stack->NumElements = stack->NumElements + 1;

        }else {
                 stack->data[stack->NumElements] = k;
 		 stack->NumElements = stack->NumElements + 1;
              }
}

int stack_pop(Stack *stack){
       if (stack->NumElements == 0){
          return -1; 
     
      }else {
	      int val = stack->data[stack->NumElements - 1];
              stack->data[stack->NumElements - 1] = 0; // Clear
              stack->NumElements = stack->NumElements - 1;
              return val;
            }
}


void stack_free(Stack *stack){
    free(stack->data);
    free(stack);
}
