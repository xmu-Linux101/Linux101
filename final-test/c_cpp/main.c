#include <stdio.h>

#include "include/my_stack.h"

int main(void) {
	int x;	
	SqStack s;
	if(InitStack(s)==0)
		return 0;
        while ( ! stack_is_full(s) ) {
		scanf("%d", &x);
		stack_push(x);
	}
	

	while ( !stack_is_empty(s) ) {
		x = stack_pop();

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
