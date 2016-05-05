#include <stdio.h>

#include "include/calculator.h"

int main(void) {
	int x,y;
	x=3,y=2;
	printf("x>2:");
	if(compare(x,y)>0)
	 printf("true\n");
	else
	 printf("false\n");
	return 0;
}
