#include <stdio.h>
int maxx(int n, int arr[])
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int min(int n, int arr[])
{
    int minn = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minn)
            minn = arr[i];
    }
    return minn;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d %d", min(n, arr), maxx(n, arr));
    return 0;
}