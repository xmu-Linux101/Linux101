#include "include/calculator.h"
#include <stdio.h>
int sum(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int divisor) {
	if(divisor==0)
	{
		printf("Divisor cannot be 0!\n");
		return -999999;
	}
	else	return x / divisor;
}
