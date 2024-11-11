#include <stdio.h>

int main()
{

    int n, t;
    scanf("%d %d", &n, &t);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0, max = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
        if (sum > t)
        {
            break;
        }
        max++;
        //printf("%d s:%d \n", arr[i], sum);
    }
    printf("%d\n", max);
}