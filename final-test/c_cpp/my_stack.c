/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
 #include"Stack.h"
#include<malloc.h>
#include<stdlib.h>
/*构造一个空栈*/
Stack *InitStack()
{
	Stack *ps = (Stack *)malloc(sizeof(Stack));
	if(ps!=NULL)
	{
		ps->top = NULL;
		ps->size = 0;
	}
	return ps;
}

/*判定是否为空栈*/
int stack_is_empty(Stack *ps)
{
	if(ps->top == NULL && ps->size == 0)
		return 1;
	else
		return 0;
}

/*返回栈大小*/
int stack_size(Stack *ps)
{
	return ps->size;
}

/*元素入栈*/
PNode stack_push(Stack *ps,Item item)
{
	PNode pnode = (PNode)malloc(sizeof(Node));
	if(pnode != NULL)
	{
		pnode->data = item;
		pnode->down = GetTop(ps,NULL);
		ps->size++;
		ps->top = pnode;
		
	}
	return pnode;
}

/*返回栈顶元素*/
PNode GetTop(Stack *ps,Item *pitem)
{
	if(stack_is_empty(ps)!=1&&pitem!=NULL)
	{
		*pitem = ps->top->data;
	}
	return ps->top;
}


/*元素出栈*/
PNode stack_pop(Stack *ps,Item *pitem)
{
	PNode p = ps->top;
	if(stack_is_empty(ps)!=1&&p!=NULL)
	{
		if(pitem!=NULL)
			*pitem = p->data;
		ps->size--;
		ps->top = ps->top->down;	
		free(p);
	}
	return ps->top;
}
