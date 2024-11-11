#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    int arr[n + 2];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int f[100005] = {0};

    for (int i = 1; i <= n; i++)
    {
        f[arr[i]] += 1;
    }
    for (int i = 1; i <= m; i++)
    {
        if (f[i] > 0)
        {
            printf("%d \n", f[i]);
        }
    }
}