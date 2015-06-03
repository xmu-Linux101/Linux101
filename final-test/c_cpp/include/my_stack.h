#ifndef STACK_H
#define STACK_H

typedef int Item;
typedef struct node * PNode;

typedef struct node
{
	Item data;
	PNode down;
}Node;

typedef struct stack
{
	PNode top;
	int size;
}Stack;

Stack *InitStack();

int stack_is_empty(Stack *ps);


int stack_size(Stack *ps);
int stack_capacity(Stack *ps);

PNode GetTop(Stack *ps,Item *pitem);

PNode stack_push(Stack *ps,Item item);

PNode stack_pop(Stack *ps,Item *pitem);

#endif //_MY_STACK_H
