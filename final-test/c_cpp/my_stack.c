#include "include/my_stack.h"

pS InitStack()
{
  pS S;
  S=(pS)malloc(sizeof(SeqStack));
  if(S!=NULL)
  return S;
}
void stack_push( pS S,int x)
{
  if(S->top=STACKSIZE-1)
    x=-1000000;
  else
  {
    S->top++;
    S->data[S->top]=x;
  }
}
int stack_pop(pS S,int *x)
{
  if(stack_empty(S)==1)
    return 0;
  else
  {
    *x=S->data[S->top];
    S->top--;
    return 1;
  }
}

int stack_capacity(pS S)
{
  return STACKSIZE;
}

int stack_size(pS S)
{
  return STACKSIZE-S->top;
}

int stack_is_empty(pS S)
{
  if(S->top == 0)
    return 1;
  else
    return 0;
}

int stack_is_full(SqStack &S)
{
  if(S.top==STACKSIZE)
    return 1;
  else
    return 0;
}

