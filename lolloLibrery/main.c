#include <stdio.h>
#include "stack.h"
#include "pollo.h"

int main(){
	Stack stack = new_Stack(10);
	push(&stack,1);
	push(&stack,2);
	push(&stack,3);
	
	pop(&stack);
	
	printf("peek %d\n",peek(&stack));
	printf("is empty%d\n",isEmpty(&stack));
	printf("in full %d\n",isFull(&stack));
	printf("size %d\n",size(&stack));
	printf("pop : %d",pop(&stack));
	pollo();
}
