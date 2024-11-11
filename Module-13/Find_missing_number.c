#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long m;
        int a, b, c;
        scanf(" %lld %d %d %d", &m, &a, &b, &c);

        long long r = a * b * c;
        long long d = (m / r);
        // printf("%d\n",d);
        // printf("%lld %d %d %d\n", m, a, b, c);

        if (m == (d * a * b * c))
        {
            printf("%lld\n", d);
        }
        else
            printf("-1\n");
    }
}