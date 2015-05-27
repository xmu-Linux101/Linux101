#include <stdio.h>

#include "include/array.h"

void array_fill_with(int array[][], int length, int fillWith) {
	int i,j;
	for (i = 0; i < length; i++) {
                for(j=0;j<length;j++){
		    array[i][j] = fillWith;
                }
	}
}
void array_multiply(int arrayX[][], int arrayY[][], int arrayZ[], int length) {
	int k,i,j;
	for (i = 0; i < length; i++)
                for(j=0;j<length;j++)
                        for(k=0;k<length;k++)
	 	             arrayZ[i][j]+ = arrayX[i][k] * arrayY[k][j];
}

void array_print(int *array, int length) {
	int i;
	for (i =0; i < length; i++) {
		printf("%d\t", array[i]);
	}
	
	printf("\n");
}
