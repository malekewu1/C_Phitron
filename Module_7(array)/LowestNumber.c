#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int lowest = a[0];
    int position = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] < lowest)
        {
            lowest = a[i];

            position = i;
        }
    }
    printf("%d %d", lowest, position + 1);
}