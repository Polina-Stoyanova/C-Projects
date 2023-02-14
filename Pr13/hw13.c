#include <stdio.h>


// Find the sum of all natural integer numbers <= n and determine whether the sum is even or not (n - defined by user, sum of all numbers from 1 till n)

int FindEvenNumber(int x) {
	int y;
	y = x % 2;
	if (y == 0) {
		printf("Even!\n");
	}
	else {
		printf("Not even! \n");
	}
}


int main() {
	int x;
	int sum = 0;
	printf("Input how many numbers you wish to see summed \n");
	scanf_s("%d", &x);
	for (int i = 1; i < x; i++) {
		sum += i;
	}
	printf("Sum: %d \n", sum);
	FindEvenNumber(sum);
	return 0;
}