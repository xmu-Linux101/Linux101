#include<stdio.h>
#include"include/my_stack.h"

int main(void) 
{
	Stack *ps = InitStack();
	int i,item;
	int x[15];
	printf("please input 10 numbers\n");
	printf（"使用push函数和gettop函数\n"）;
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		stack_push(ps,i);
		GetTop(ps,&item);
		printf("%d ",item);
	}
	
	printf("\n使用pop函数\n");
	for(i=0;i<10;i++)
	{
		stack_pop(ps,&item);
		printf("%d ",item);
	}

	if(stack_is_empty(ps))
		printf("\n该栈已空");
	return 0;
}
