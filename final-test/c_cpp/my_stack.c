int InitStack(SqStack &S)
{
  S.base=(int *)malloc(100*sizeof(int));
  if(!S.base)
    return 0;
    S.top=S.base;
    S.stacksize=100;
    return 1;
}
void stack_push(SqStack &S,int x)
{
  if(S.top-S.base>=S.stacksize)
  {
    S.base=(int*)realloc(S.base,(S.stacksize+10*sizeof(int)));
    S.stacksize+=10;
    S.top=S.base+S.stacksize;
  }
  *S.top++=x;
}
int stack_pop(SqStack &S)
{
  int e;
  if(S.top ==S.base)
  {
    printf("error");
    return -100000;
  }
  else
    e=S.top;
  S.top--;
  return e
}

int stack_capacity(SqStack &S)
{
  return S.stacksize;
}
int stack_size(SqStack &S)
{
  int num;
  num=S.top -S.base;
  return S.stacksize-num;
}

int stack_is_empty(SqStack &S)
{
  if(S.top == S.base)
    return 1;
  else
    return 0;
}

int stack_is_full(SqStack &S)
{
  if(S.top-S.base ==S.stacksize)
    return 1;
  else
    return 0;
}
}
}
