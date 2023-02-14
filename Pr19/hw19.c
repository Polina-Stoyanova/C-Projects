#include <stdio.h>
#include <math.h>

//User submits an integerand you should check if it's an exact square. (n = 4 -> yes)

int CheckSquareRoot(int x) {
	double y;
	int z;

	y = sqrt(x);
	z = y;

	if (y == z) {
		printf("yes");
	}
	else {
		printf("no");
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