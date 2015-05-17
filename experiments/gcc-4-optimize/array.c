#include <stdio.h>

#include "include/array.h"

void array_fill_with(int *array, int length, int fillWith) {
	int i;
	for (i = 0; i < length; i++) {
		array[i] = fillWith;
	}
}

void array_add(int *arrayX, int *arrayY, int *arrayZ, int length) {
	int i;
	for (i = 0; i < length; i++) {
		arrayZ[i] = arrayX[i] + arrayY[i];
	}
}

void array_print(int *array, int length) {
	int i;
	for (i =0; i < length; i++) {
		printf("%d\t", array[i]);
	}
	
	printf("\n");
}
