#include <stdio.h>

int main()
{

    long long n, m, k; // eyes=n, mouths=m and bodies=k.

    scanf("%lld%lld%lld", &n, &m, &k);
    long long min = 0, kat = 0;
    if (n < m && n < k)
    {
        min = n;
    }
    else if (m < k)
    {
        min = m;
    }
    else
    {
        min = k;
    }

    if ((n != 0) && (m != 0) && (k != 0))
    {
        kat = kat + min;
        n = n - min;
        m = m - min;
        k = k - min;

        if ((n == 0) || (k == 0))
        {
            printf("%lld\n", kat);
        }
        else if ((n != 0) && (k != 0))
        {
            long long t = n / 2;
            if (t <= k)
            {
                printf("%lld\n", kat = kat + t);
            }
            else
            {
                printf("%lld\n", kat = kat + k);
            }
        }
    }
    else{
        printf("%lld\n", kat);
    }
}