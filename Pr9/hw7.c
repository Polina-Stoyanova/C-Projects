#include <stdio.h>

//Turn an user-submitted integer n into it's binary representation (5 -> 101)


int FindBinaryCode(int x) {
	if (x > 1) {
		FindBinaryCode(x / 2);
	}
	printf("%d", x % 2);

	return 0;
}

int main() {
	int x;
	printf("Enter a random number to convert into a binary code: \n");
	scanf_s("%d", &x);
	FindBinaryCode(x);

	return 0;
}
