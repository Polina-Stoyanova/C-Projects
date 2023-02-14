#include <stdio.h>

//User submits 5 integers and you have to order them in descending order. (2 1 3 4 5-> 5 4 3 2 1)

int DSort(int number[], int x) {
	int temp;

	for (int j = 0; j < x; ++j)
	{
		for (int k = j + 1; k < x; k++)
		{
			if (number[j] < number[k])
			{
				temp = number[j];
				number[j] = number[k];
				number[k] = temp;
			}
		}
	}
	printf("Numbers in descending order \n");

	for (int i = 0; i < x; ++i) {
		printf("%d, ", number[i]);
	}
}

int main()
{
	int x = 5, number[5];
	printf("Input 5 random numbers \n");

	for (int i = 0; i < x; i++) {
		scanf_s("%d", &number[i]);
	}
	DSort(number, x);
	return 0;
}