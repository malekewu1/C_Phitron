#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], a[n];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = max - arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}