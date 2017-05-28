/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#
#define MAXSIZE 10
#include <stdio.h>
#include <stdlib.h>
#include "include/my_stack.h"
typedef struct{
	int data[MAXSIZE];
	int top;
}Seqstack;

Seqstack* stack_init()
{
	Seqstack *s;
	s=(Seqstack*)malloc(sizeof(Seqstack));
	s->top=-1;
	return s;
} 
void stack_push(int x,Seqstack *s)
{
	s->top=s->top+1;
	s->data[s->top]=x;
}
int stack_pop(Seqstack*s)
{
	return s->data[s->top];
}
int stack_is_empty(Seqstack*s)
{
	if(s->top==-1)
		return 0;
	else
		return 1;
}
int stack_is_full(Seqstack*s)
{
	if(s->top==MAXSIZE-1)
		return 0;
	else
		return 1;
}
