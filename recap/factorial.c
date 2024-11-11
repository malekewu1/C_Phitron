#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int p;
        scanf("%d", &p);

        long long m = 1;
        for (int i = 1; i <= p; i++)
        {
            m = m * i;
        }
        printf("%lld\n", m);
    }
}