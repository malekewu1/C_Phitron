#include <stdio.h>
void update(int n, int arr[])
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
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

    int a[n / 2];
    for (int i = 0, j = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            a[j] = arr[i];
            j++;
        }
    }
    update(n / 2, a);
    for (int i = 0; i < n / 2; i++)
    {
        printf("%d ", a[i]);
    }
}