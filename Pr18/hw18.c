#include <stdio.h> 

//Check if given positive integer N is prime or not.

int main()
{
    int x, flag = 1;
    printf("Enter a number \n");
    scanf_s("%d", &x);

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("%d is a prime number", x);
    }
    else {
        printf("%d is not a prime number", x);
    }
    return 0;
}