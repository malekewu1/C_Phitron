#include <stdio.h>

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    int sum = a - b;

    if (sum < 0)
    {
        sum = sum * (-1);
    }
    if (a == 0 && b == 0)
    {
        printf("NO");
    }
    else if (sum == 1)
    {
        printf("YES");
    }
    else if (sum == 0)
    {
        printf("YES");
    }
    else
        printf("NO");
}