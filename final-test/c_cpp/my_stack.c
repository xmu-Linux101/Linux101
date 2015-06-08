/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include <stdio.h>
#include <stdlib.h>
#define Stack_Size 10
int i =0;
typedef struct stack {
	int *top;
	int *base;
	int stacksize;
}SStack;
SStack *S;
void CreateStack(){
	if(S->base == NULL){
		S->base = (int *)malloc(Stack_Size * sizeof(int));
		S->top = S->base;
		S->stacksize = Stack_Size;
	}
}
void stack_push(int x){
	if(i == 0){
 		
		CreateStack(S);
	}
	*(S->top) = x;
	if(S->top - S->base < 10)
		S->top++;
	i++;
}
int stack_pop(){
	int a;
	a = *(S->top-1);
	if(S->top!=S->base)
		S->top--;
	return a;
}
int stack_capacity(){
	return 10;
}

int stack_size(){


	int l;
	l = S->top-S->base+1;
	return l;

}
int stack_is_empty(){
	if(S->top == S->base)
		return 1;
	else 
		return 0;
}
int stack_is_full(){
	if(S->top-S->base >= 10)
		return 1;
	else return 0;
}

