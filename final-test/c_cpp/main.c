#include <stdio.h>

#include "include/my_stack.h"

int main(void) {
	int x;	
	pS s;
	s=InitStack(s);
		return 0;
        while ( ! stack_is_full(s) ) {
		scanf("%d", &x);
		stack_push(s,x);
	}
	

	while ( !stack_is_empty(s) ) {
		x = stack_pop(s,&x);

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
