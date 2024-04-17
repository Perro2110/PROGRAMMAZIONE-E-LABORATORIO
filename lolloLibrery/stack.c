#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack new_Stack(int size){
	Stack self;
	self.max = size;
    self.top = -1;
    self.data = (int*)malloc(sizeof(int) * size);
    
    return self;
}

int isEmpty(Stack *self) {
    return self->top == -1;
}

int isFull(Stack *self) {
    return self->top == self->max-1;
}

int push(Stack *self, int val) {
    if(isFull(self))
        exit(EXIT_FAILURE);
	
	self->data[++self->top] = val;
}

int pop(Stack *self){
 	if (isEmpty(self)) 
		exit(EXIT_FAILURE);
 	
 	return self->data[self->top--];
 }

int peek(Stack *self){
	 if (!isEmpty(self)) {
        return self->data[self->top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}
int size(Stack *self){
    return self->top+1;
}
