#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) < 0)
        {
            *(ptr + i) = 2;
        }
        else if (*(ptr + i) > 0)
        {
            *(ptr + i) = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    free(ptr);
}