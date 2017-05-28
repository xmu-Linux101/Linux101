#include <stdio.h>

#include <stdlib.h>

#include "include/my_stack.h"

#define STACK_SIZE 100

typedef struct {
	int *base;
	int *top;
	int stacksize;
	}SqStack;

SqStack *S;
S.base=(int*)malloc(STACK_SIZE*sizeof(int));
S.top=S.base;
S.stacksize=STACK_SIZE;

void stack_push(int x) {
	*S.top++=x;
}

int stack_pop() {
	int e;
	if(S.top==S.base)
		return ERROR;
	e=*--S.top;
	return e;
}

int stack_capacity() {
	return S.stacksize;
}

int stack_size() {
	return (S.top-S.base);	
}

int stack_is_empty() {
	if(S.top==S.base)
	return 1;
	else return 0;
}

int stack_is_full() {
	if(S.top-S.base>=S.stacksize)
	return 1;
	else return 0;
}
