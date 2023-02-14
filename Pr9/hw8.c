#include <stdio.h>

//Turn an user - submitted binary number into it's decimal representation (101 -> 5)


int decimal(int x) {
	int dvalue = 0;
	int base = 1;
	int temp = x;

	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dvalue += last_digit * base;
		base = base * 2;
	}
	printf("%d", dvalue);

	return dvalue;
}

int main() {
	int x;
	printf("Enter a random binary code to convert into a decimal number: \n");
	scanf_s("%d", &x);
	decimal(x);

	return 0;
}


