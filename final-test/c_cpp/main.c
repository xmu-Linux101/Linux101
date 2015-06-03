#include <stdio.h>

#include "include/my_stack.h"

int main(void) {
	int x,cap;
	Stack *ps = InitStack();
	printf("Please define stack'cap\n");
	scanf("%d",&cap);  	
	printf("stack's cap is %d\n",cap);
        while ( cap!=GetSize(ps)) {
		scanf("%d", &x);
		Push(ps,x);
		printf("The %d's place is %d\n",GetSize(ps),x);
	}
	
	printf("Now pop stack\n");
	while ( !IsEmpty(ps) ) {
		//printf("Now pop stack\n");
		x=Pop(ps);

		printf("%d\t",x);
	}
	printf("\n");

	return 0;
}
