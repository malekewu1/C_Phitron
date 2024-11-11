#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max, mid, min;

    if (a >= b && a >= c)
    {
        max = a;
        if (c >= b)
        {
            mid = c;
            min = b;
        }
        else
        {
            mid = b;
            min = c;
        }
    }
    else if (b >= a && b >= c)
    {
        max = b;
        if (a >= c)
        {
            mid = a;
            min = c;
        }
        else
        {
            mid = c;
            min = a;
        }
    }
    else
    {
        max = c;
        if (a >= b)
        {
            mid = a;
            min = b;
        }
        else
        {
            mid = b;
            min = a;
        }
    }
    printf("%d\n%d\n%d\n\n", max, mid, min);
    printf("%d\n%d\n%d\n", a, b, c);
}