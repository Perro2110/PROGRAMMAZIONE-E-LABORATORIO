 
typedef struct {
    int *data;
    int top;
    int max;
}Stack;

extern Stack new_Stack(int);

extern int push(Stack *, int );
 
extern int pop(Stack *);

extern int peek(Stack *);

extern int isEmpty(Stack *);

extern int isFull(Stack *);

extern int size(Stack *);
