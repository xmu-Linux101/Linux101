#include"include/my_stack.h"
#include<malloc.h>

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

int stack_is_empty(Stack *ps)
{
	if(ps->top == NULL && ps->size == 0)
		return 1;
	else
		return 0;
}

int stack_size(Stack *ps)
{
	return ps->size;
}


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

PNode GetTop(Stack *ps,Item *pitem)
{
	if(stack_is_empty(ps)!=1&&pitem!=NULL)
	{
		*pitem = ps->top->data;
	}
	return ps->top;
}

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
