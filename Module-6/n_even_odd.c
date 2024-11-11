#include <stdio.h>
int main()
{
    int m, e = 0, o = 0, p = 0, n = 0;
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
            e++;

        else
            o++;

        if (x > 0)
            p++;
        else if (x < 0)
            n++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", e, o, p, n);
}