#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef enum PointTag
{
	Link,Thread
};

typedef char Status;
typedef char TElemType;
typedef struct BiThrNode{
	TElemType data;
	struct BiThrNode *lchild,*rchild;
	PointTag LTag,RTag;
}BiThrNode,*BiThrTree;

void InThreading(BiThrTree p);

BiThrTree pre;

Status Visit(TElemType e)
{
	printf("%c ",e);
	return OK;
}

Status InOrderThreading(BiThrTree&Thrt,BiThrTree T)
{
	if(!(Thrt=(BiThrTree)malloc(sizeof(BiThrNode))))
		exit(OVERFLOW);
	Thrt->LTag=Link;
	Thrt->RTag=Thread;
	Thrt->rchild=Thrt;
	if(!T)	
		Thrt->lchild=Thrt;
	else
	{
		Thrt->lchild=T;
		pre=Thrt;
		InThreading(T);
		pre->rchild=Thrt;
		pre->RTag=Thread;
		Thrt->rchild=pre;
	}
	return OK;
}

Status InOrderTraverse_Thr(BiThrTree T,Status(*Visit)(TElemType e))
{
	BiThrTree p;
	p=T->lchild;
	while(p!=T)
	{
		while(p->LTag==Link)
			p=p->lchild;
		if(!Visit(p->data))
			return ERROR;
		while(p->RTag==Thread&&p->rchild!=T)
		{
			p=p->rchild;
			Visit(p->data);
		}
		p=p->rchild;
		
	}
	return OK;
}


void InThreading(BiThrTree p)
{
	if(p)
	{
		InThreading(p->lchild);
		if(!p->lchild)
		{
			p->LTag=Thread;
			p->lchild=pre;
		}
		if(!pre->rchild)
			{
				pre->RTag=Thread;
				pre->rchild=p;
			}
		pre=p;
		InThreading(p->rchild);	
	}
}
Status Createbitree(BiThrTree &T)
{
	char ch;
	scanf("%c",&ch);
	if(ch==' ')		
		T=NULL;	
	else 
	{
		if(!(T=(BiThrNode *)malloc(sizeof(BiThrNode))))
			exit(OVERFLOW);
		T->data=ch;T->RTag=Link;T->LTag=Link;
		Createbitree(T->lchild);
		Createbitree(T->rchild);
	}
	return OK;
}


int main()
{
	BiThrTree T;
	BiThrTree thrt;
	Createbitree(T);	
	InOrderThreading(thrt,T);
	InOrderTraverse_Thr(thrt,Visit);
	printf("\n");
	return 0;
}