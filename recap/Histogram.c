#include <stdio.h>

int main()
{
    char c;
    int n;
    scanf("%c %d", &c, &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}