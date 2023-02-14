#include <stdio.h>

//User submits an integer(for example 123).Print the number in reverse(321).


int main() {
	int x, y = 0;

	printf("Enter a number: \n");
	scanf_s("%d", &x);

	while (x != 0) {
		y = y * 10;
		y = y + x % 10;
		x = x / 10;
	}
	printf("%d", y);
	return 0;
}

