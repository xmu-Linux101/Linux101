#ifndef _MY_STACK_H
#define _MY_STACK_H

#include<stdlib.h>
#define STACKSIZE 100
typedef struct
{
  int data[STACKSIZE];
  int top;
}SeqStack,*pS;
pS InitStack();
void stack_push(pS S,int x);
int stack_pop(pS S,int *x);

// The capacity of the stack
int stack_capacity(pS S);

// Current available size of the stack
int stack_size(pS S);


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(pS S);
int stack_is_full(pS S);


#endif //_MY_STACK_H
