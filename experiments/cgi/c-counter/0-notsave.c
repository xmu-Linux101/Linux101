#include <stdio.h>

int counter = 0;

int main(void) {
	counter++;

        printf("Content-Type: text/plain \n\n");


        printf("Visited: %d", counter);

	return 0;

}

