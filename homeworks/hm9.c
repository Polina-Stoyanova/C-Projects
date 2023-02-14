#include <stdio.h>

//Check whether an user-submitted char 'c' is a capital letter or not ('A' -> it is; '0' -> it is not)


int main() {
	char c;
	printf("Input a random letter: \n");
	scanf_s("%c", &c);
	switch (c)
	{
	case'Q':
	case'W':
	case'E':
	case'R':
	case'T':
	case'Y':
	case'U':
	case'I':
	case'O':
	case'P':
	case'A':
	case'S':
	case'D':
	case'F':
	case'G':
	case'H':
	case'J':
	case'K':
	case'L':
	case'Z':
	case'X':
	case'C':
	case'V':
	case'B':
	case'N':
	case'M': printf("Capital letter."); break;
	default: printf("Non-capital letter."); break;
	}
}
