#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n+5];
    int f[100005]={0};
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        f[arr[i]] += 1;
    }

    int count = 0;
    for (int i = 1; i < 100005; i++)
    {
        if (f[i] == 1)
        {

            count++;
        }
    }

    printf("%d", count);
}