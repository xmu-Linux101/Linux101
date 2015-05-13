#include <stdio.h>
#include <time.h>

#include "include/calculator.h"

#include "include/array.h"

#define VECTOR_LENGTH 2048

int main(void) {

	int vector_a[VECTOR_LENGTH], vector_b[VECTOR_LENGTH], vector_c[VECTOR_LENGTH];

	double time_start, time_end;	
	array_fill_with(vector_a, VECTOR_LENGTH, 10);
	array_fill_with(vector_b, VECTOR_LENGTH, 55);

	time_start = clock();
	
	array_add(vector_a, vector_b, vector_c, VECTOR_LENGTH);

	time_end = clock();

	//array_print(vector_c, VECTOR_LENGTH);
	
	printf("Time used: %10.9f\n", (double) ( (time_end - time_start) / 1000.0) );

	return 0;
}



