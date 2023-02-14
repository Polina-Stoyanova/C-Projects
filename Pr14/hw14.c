#include <stdio.h>

//Check if there are repeating digits in an user - submitted integer n. (112 - yes)

int CheckForRepeatedDigits(int num)
{
	int count = 0;
	int count_repeated = 0;
	int j = num;
	int n = num;
	int num2;

	while (j != NULL)
	{
		count++;
		j = j / 10;
	}
	int last_num;
	for (int i = 0; i < count; i++)
	{
		last_num = n % 10;
		n = n / 10;
		num2 = n;
		for (int ii = i; ii < count - 1; ii++)
		{
			if (last_num == num2 % 10)
			{
				printf("Repeating digits!\n");
				return 0;
			}
			num2 = num2 / 10;
		}
	}
	printf("No repeating digits!\n");
	return 0;
}

int main() {
	int number;
	printf("Enter a number:\n");
	scanf_s("%d", &number);
	CheckForRepeatedDigits(number);
}