#include <stdio.h>

//User submits an integer (for example 123). Print the sum of all digits (6).



int Sum(int x) {
	int sum = 0;
	while (x != 0) {
		sum += x % 10;
		x = x / 10;
	}

	return sum;
}

int main() {
	int x;
	printf("Input a random number \n");
	scanf_s("%d", &x);
	printf("%d", Sum(x));

	return 0;
}


