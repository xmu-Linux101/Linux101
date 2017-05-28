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
     if(divisor != 0)
	return x / divisor;
     else{
	printf("error:divisor can not be 0\n");
	return -1;
     }
}
