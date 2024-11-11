#include <stdio.h>

int main()
{

    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= x && arr[i] <= y)
        {
            max++;
            // printf("%d m:%d \n", arr[i], max);
        }
    }
    printf("%d\n", max);
}