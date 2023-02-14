#include <stdio.h>

//User submits 5 integers and you have to order them in ascending order. (3 1 2 5 4-> 1 2 3 4 5)

int ASort(int number[], int x)
{
    int temp;
    for (int j = 0; j < x; ++j)
    {
        for (int k = j + 1; k < x; k++)
        {
            if (number[j] > number[k])
            {
                temp = number[j];
                number[j] = number[k];
                number[k] = temp;
            }
        }
    }

    printf("Numbers in ascending order \n");

    for (int i = 0; i < x; ++i) {
        printf("%d, ", number[i]);
    }
}
int main()
{
    int x = 5, number[5];
    printf("Input 5 random numbers \n");
    for (int i = 0; i < x; ++i) scanf_s("%d", &number[i]);
    ASort(number, x);

    return 0;
}