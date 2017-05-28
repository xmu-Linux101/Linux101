#ifndef _MY_STACK_H
#define _MY_STACK_H

#include<stdlib.h>
struct SqStack
{
  int *top;
  int *base;
  int stacksize;
}
int InitStack(SqStack &S);
void stack_push(SqStack &S,int x);
int stack_pop(SqStack &S);

// The capacity of the stack
int stack_capacity(SqStack &S);

// Current available size of the stack
int stack_size(SqStack &S);


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(SqStack &S);
int stack_is_full(SqStack &S);


#endif //_MY_STACK_H
