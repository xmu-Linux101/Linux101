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

double divide(double x, double divisor){
	if(divisor==0){
	    printf("Error!divisor is zero");
	    return 999999999;	
	}else{
	    return x / divisor;
	}
	
}
