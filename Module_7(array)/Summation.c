#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long int sum = 0;
  
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    long long l= abs(sum);
    printf("%lld",l);
}