#include <stdio.h>

int main()
{

    int n;
    scanf("%d ", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (arr[i] >= 1 && arr[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (arr[i] >= 4 && arr[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else if (arr[i] > 7 && arr[i] <= 20)
        {
            printf("Senior candidate\n");
        }
    }
}