#include <stdio.h>

//User submits a positive integer N. Print all even numbers in the range 0..N.

int main() {
	int x;
	int y = 0;

	printf("Enter a count positive numbers: \n");
	scanf_s("%d", &x);

	if (x < 0) {
		printf("The count must be a positive non-zero number!");
		return 0;
	}
	else {
		for (int i = 1; i < x; i++) {
			if (i % 2 == 0) {
				printf("%d, ", i);
			}
		}
	}
	return 0;
}