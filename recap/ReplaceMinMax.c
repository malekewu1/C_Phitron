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
    int max = arr[0], min = arr[0];
    // found min_max
    for (int i = 0; i < n; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
        if (min >= arr[i])
        {
            min = arr[i];
        }
    }
    // printf("min: %d max: %d\n", min, max);
    // replace min_max
    for (int i = 0; i < n; i++)
    {
        if (max == arr[i])
        {
            arr[i] = min;
            // printf("max %d\n",arr[i]);
        }
        else if (min == arr[i])
        {
            arr[i] = max;
            // printf("min %d\n",arr[i]);
        }
    }
    // printing min_max
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}