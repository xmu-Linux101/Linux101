#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define STACK_INIT_SIZE 100 //存储空间初始分配量
#define STACKINCREMEMNT 10 //存储空间分配增量
#define MAX_TREE_SIZE 100


typedef char Telemtype;
typedef char Status;

typedef struct Bitnode{
	Telemtype data;
	struct Bitnode *lchild,*rchild;
}Bitnode,*Bitree;

typedef Bitree SElemType;
typedef struct{
	SElemType *base;
	SElemType *top;
	int stacksize;
}SqStack;
Status InitStack(SqStack &s)     //构造一个空栈 S
{
	s.base=(SElemType*)malloc(STACK_INIT_SIZE*sizeof(SElemType));         //存储分配失败
	if (!s.base)
		return OVERFLOW;
	s.top=s.base;
	s.stacksize=STACK_INIT_SIZE;
	return OK;
}

Status Push(SqStack &s, SElemType e)      //插入元素e为新的栈顶元素
{
	if (s.top-s.base>=s.stacksize)        //栈满，追加空间
	{
		s.base=(SElemType*) realloc(s.base, (s.stacksize + STACK_INIT_SIZE) * sizeof(SElemType));
		if (!s.base)
			return OVERFLOW;
		s.top=s.base+s.stacksize;
		s.stacksize+=STACKINCREMEMNT;
	}
	*s.top++=e;
	return OK;
}

Status Pop(SqStack &s, SElemType &e)
{
	if (s.top==s.base)
		return ERROR;
	e=*--s.top;
	return OK;
}

Status GetTop(SqStack S,SElemType &e)
{
	if(S.top==S.base)
		return ERROR;
	e=*(S.top-1);
	return OK;
}

Status StackEmpty(SqStack S)
{
	if (S.top==S.base) 
		return TRUE;  
	else 
		return FALSE; 
}


Status Visit(Telemtype e)
{
	printf("%c ",e);
	return OK;
}

Status Inordertraverse(Bitree T,Status (*Visit)(Telemtype e))
{

	SqStack S;
	Bitree p;
	InitStack(S);
	p=T;
	while(p||!StackEmpty(S))
	{
		if(p)
		{
			Push(S,p);
			p=p->lchild;
		}
		else
		{
			Pop(S,p);
			if(!Visit(p->data))
				return ERROR;
			p=p->rchild;
		}
	}
}


Status Createbitree(Bitree &T)
{
	char ch;
	scanf("%c",&ch);
	if(ch==' ')		T=NULL;
	else 
	{
		if(!(T=(Bitnode *)malloc(sizeof(Bitnode))))
			exit(OVERFLOW);
		T->data=ch;
		Createbitree(T->lchild);
		Createbitree(T->rchild);
	}
	return OK;
}




int main()
{
	Bitree T;
	Createbitree(T);
	printf("中序遍历：\n");
	Inordertraverse(T,Visit);
	printf("\n");
	return OK;
}
