#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int value;
	int password;
	struct node *next;
}Lnode;

Lnode *creatlink(int number)
{
	Lnode *head=NULL;
	Lnode *p=NULL;
	Lnode *q=NULL;
	int i=1;
	head=(struct node*)malloc(sizeof(struct node));
	head->value=i;
	printf("the 1 password is ");
	scanf("%d",&head->password);
	p=head;
	for(i=2;i<=number;i++)
	{
		q=(struct node*)malloc(sizeof(struct node));
		if(q==0)
			return 0;
		p->next=q;
		p=q;
		p->value=i;
		printf("the %d password is ",i);
		scanf("%d",&p->password);
	}
	p->next=head;
	return p;
}

void joseph(Lnode *p,int number,int n)
{
	int i,j;
	Lnode*q=NULL;
	for(i=1;i<=number;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			p=p->next;
		}
		q=p->next;
		p->next=q->next;
		printf("%d\n",q->value);
		n=q->password;
		free(q);
	}
}

int main()
{
	int number,n;
	Lnode *a=NULL;
	printf("please input  number and n\n");
	scanf("%d%d",&number,&n);
	a=creatlink(number);
	printf("the answer is :\n");
	joseph(a,number,n);
	return 0;
}


