#include <stdio.h>
int count_before_one(int n, int arr[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return count;
        }
        else
        {
            count++;
        }
    }
    return count;
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

    printf("%d", count_before_one(n, arr));
}