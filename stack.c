#include<stdio.h>
int main()
{
stack stack;
 initialize(&stack);  

PUSH (&stack,10);
PUSH (&stack,34);
PUSH(stack,9);
printf("%d top element: \n",peek(&stack));

printf("Popped element: %d\n", pop(&stack));  
  
printf("Top element after popping: %d\n", peek(&stack));  
  
    return 0;  
}  

