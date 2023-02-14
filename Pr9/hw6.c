#include <stdio.h>

//Find the factorial of an user defined integer n (n!)

int main() {
	unsigned long x, y, z = 1;
	printf("Enter a random number: \n");
	scanf_s("%i", &x);

	if (x < 00)
	{
		printf("No can do");
	}

	for (y = 1; y <= x; ++y) {
		z = z * y;
	}

	printf("%lu", z);
}



