#include"include/my_stack.h"

int stack_pop()
{
	return StackArray[x--];
}

int stack_capacity()
{
	return _MY_STACK_H-x;
}

int stack_size()
{
	return _MY_STACK_H;
}

int stack_is_empty()
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int stack_is_full()
{
	if(x=_MY_STACK_H)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(int x)
{
	StackArray[x]=x;
}
