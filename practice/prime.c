#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int primeCount = 0, PrimeSum = 0;

    for (int j = 2; j <= n; j++)
    {
        int c = 0;

        for (int i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                c++;
                break;
            }
        }

        if (c == 0)
        {
            printf("%d ", j);
            primeCount++;
            PrimeSum = PrimeSum + j;
        }
    }
    printf("\nprimeCount: %d \nPrimeSum:%d", primeCount, PrimeSum);
}