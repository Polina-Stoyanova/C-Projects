#include <stdio.h>

//User submits an integer. Find all prime factors of that integer. (The prime factors of 13195 are 5, 7, 13 and 29.)


void FindPrimeFactor(int x) {
	int devider = 2; //first prime number
	int count_devider = 0;

	for (int i = 2; i < x; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				count_devider++;
			}
		}
		if (count_devider == 1 && x%i == 0)
		{
			printf("%d\n", i);
		}
		count_devider = 0;
	}
}

int main() {
	int x;
	printf("Input a random number: \n");
	scanf_s("%d", &x);
	FindPrimeFactor(x);
	return 0;
}


