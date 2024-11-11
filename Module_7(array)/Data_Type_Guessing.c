#include <stdio.h>
int main()
{

    double n, k, a;

    scanf("%lf%lf%lf", &n, &k, &a);
    double x = (n * k) / a;

    if (x == (int)x)
    {
        printf("int");
    }
    else if (x == (long long)x)
    {
        printf("long long");
    }
    else
        printf("double");
}