#include <stdio.h>

int main()
{
    int n, s = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        s += a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    double av = (double)s / n;
    printf("\n av= %lf", av);
    printf("\nmax=%d \n Min=%d\n s=%d", max, min, s);
}