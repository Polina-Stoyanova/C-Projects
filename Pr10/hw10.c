#include <stdio.h>

//Find the sum of the squares of the first n natural integers (n - user submitted; n = 3 -> 1^2 + 2^2 + 3^2 = 14)

int main() {
	int x;
	int sum = 0;
	printf("Input how many squared numbers you wished to see squared \n");
	scanf_s("%d", &x);

	if (x <= 0)
	{
		return 0;
	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			sum += i * i;
		}
	}
	printf("%d", sum);
	return 0;
}
