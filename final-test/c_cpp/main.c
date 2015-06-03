#include<stdio.h>
#include"include/my_stack.h"

int main(void) 
{
	Stack *ps = InitStack();
	int i,item;
	int x[15];
	printf("please input 10 numbers\n");
	printf("test stack_push() and GetTop()\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		stack_push(ps,i);
		GetTop(ps,&item);
		printf("%d ",item);
	}
	
	printf("\ntest stack_pop()\n");
	for(i=0;i<10;i++)
	{
		stack_pop(ps,&item);
		printf("%d ",item);
	}

	if(stack_is_empty(ps))
		printf("\nthis stack is empty!");
	return 0;
}
