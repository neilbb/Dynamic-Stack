#include "stack.h"
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>


int main(){
 
  int seed = time(NULL);
  printf("seed: %d\n", seed);
  srand(seed);
  
  Stack *s = stack_init();

  for (int i = 0; i < 20; i++) {
   
      int r = rand() % 3;

      if (r != 0) {
            int value = (rand() % 20) + 1;
                printf("pushed value: %d\n", value);
                stack_push(s, value);
                }
      else{
            if (stack_empty(s) == true){
                 printf("Stack is empty, no value can be popped\n");
           }else {
                  printf("popped value: %d\n", stack_pop(s));
                 }
          }
    }
   printf("\n");
   printf("Contents of Stack:\n");
   printf("Top\n");
   for(int i = s->NumElements - 1; i>=0; i=i-1){
      printf("| %2d |\n",s->data[i]);
     }
   printf("Bottom\n");
   printf("\n");  
   stack_free(s);
   return 0;  
}
