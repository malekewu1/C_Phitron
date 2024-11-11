#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int p, q;
        scanf("%d %d", &p, &q);
        // printf("%d %d\n", p, q);
        int sum = 0;

        if (p < q)
        {
            for (int i = p + 1; i < q; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        else{
            for (int i = q + 1; i < p; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        printf("%d\n", sum);
    }
}