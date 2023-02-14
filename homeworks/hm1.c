#include <stdio.h>


int main() {
	int num;
	int t;
	int sum = 0;
	int count = 0;
	float average;

	printf("Enter a number:\n");

	do
	{
		t = scanf_s("%d", &num);

		if (t != 1)
		{
			printf("The input is not intiger!\n ");
			break;
		}

		if (num != -999 && t == 1)
		{
			sum += num;
			count++;
		}

	} while (num != -999);

	average = sum / count;
	printf("Sum = %d, count = %d and Average = %.f", sum, count, average);
}
