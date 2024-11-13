#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < n - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= p; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
                printf("-");
        }
        p = p + 2;
        printf("\n");
    }
    //printf("p=%d\n", p);
    p = p - 4;
    for (int i = n - 1; i >= 1; i--)

    {
        for (int s = 0; s < n - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= p; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
                printf("-");
        }
        p -= 2;
        printf("\n");
    }
}
