#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>


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

Status Createbitree(Bitree &T);
Status Visit(Telemtype e);
Status Preordertraverse(Bitree T,Status (*Visit)(Telemtype e));

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


Status Visit(Telemtype e)
{
	printf("%c ",e);
	return OK;
}

Status Preordertraverse(Bitree T,Status (*Visit)(Telemtype e))		//先序遍历二叉树
{
	if(T)
	{
		if(Visit(T->data))
			if(Preordertraverse(T->lchild,Visit))
				if(Preordertraverse(T->rchild,Visit))
					return OK;
			return ERROR;
	}
	else 
		return OK;
}

int main()
{
	Bitree T;
	Createbitree(T);
	printf("先序遍历：\n");
	Preordertraverse(T,Visit);
	return OK;
}
