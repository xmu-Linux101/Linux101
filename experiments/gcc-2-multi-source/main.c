#include <stdio.h>

int main(void) {
	int x, y;
	
	x = 2;
	y = 3;

	printf("%d + %d = %d\n", x, y, sum(2, 3));
	printf("%d - %d = %d\n", x, y, subtract(2, 3));
	printf("%d * %d = %d\n", x, y, multiply(2, 3));
	printf("%d / %d = %d\n", x, y, divide(2, 3));
	printf("1 / 0 = %d\n", divide(1, 0));
	return 0;
}
