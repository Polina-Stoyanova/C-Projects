#include <stdio.h>

//The user submits n integers. Find the greatest one. (n is defined by user)

int main() {
	int x;
	int y[100];
	int greatest_num;

	printf("Input the number of integers you wish to compare \n");
	scanf_s("%d", &x);

	if (x <= 0) {
		printf("You must enter positive non-zero number!");
	}
	else {
		for (int i = 0; i < x; i++) {
			printf("Enter number %d: \n", i + 1);
			scanf_s("%d", &y[i]);
		}
		greatest_num = y[0];
		for (int i = 1; i < x; i++) {
			if (greatest_num < y[i]) {
				greatest_num = y[i];

			}
		}
		printf("%d \n", greatest_num);
	}
	return 0;
}