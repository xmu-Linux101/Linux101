#include <stdio.h>

void bubble_sort(int a[], int n) {
	int i, j, temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}


int main(void) {
	int i, a[8] = {3, 1, 5, 7, 2, 4, 9, 6};

	bubble_sort(a, 8);

	for (i = 0; i < 8; i++) {
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}
