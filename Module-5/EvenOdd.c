#include <stdio.h>

int main()
{

    int number;

    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
        printf("Odd\n");

    if (0 > number)
        printf("Negative\n");
    else if (0<number)
        printf("Positive\n");
}