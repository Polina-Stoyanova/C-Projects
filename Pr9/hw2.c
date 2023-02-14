#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ..., n-2, n-1, (n-1 + n-2) - example of Fibonacci number sequence.
//User defines the number of digits n. Print first n digits from the Fibonacci sequence.


int main() 
{
	int x;
	int f1 = 0;
	int f2 = 1;
	int nextNumber;

	printf("How many Fibonacci numbers? \n");
	scanf_s("%d", &x);

	if (x <= 0) 
	{
		printf("x must be a positive number!");
		return 0;
	}
	else
	{
		for (int i = 0; i < x; i++) {
			printf("\n%d", f1);
			nextNumber = f1 + f2;
			f1 = f2;
			f2 = nextNumber;
		}
	}
	return 0;
}