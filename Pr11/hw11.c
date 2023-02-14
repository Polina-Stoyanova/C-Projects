#include <stdio.h>
#include <math.h>

//User submits a number n and your program should check if it is an exact square (n = 4 -> yes)

int CheckSquareRoot(int x) {
	double y;
	int z;
	y = sqrt(x);
	z = y;

	if (y == z) {
		printf("Exact square!");
	}
	else {
		printf("Nor exact square!");
	}
	return 0;
}

int main() {
	int x;
	printf("Input a random natural number: \n");
	scanf_s("%d", &x);
	CheckSquareRoot(x);
	return 0;
}


