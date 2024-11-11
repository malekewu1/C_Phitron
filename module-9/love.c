#include <stdio.h>
#include <string.h>
int main()
{
    char a[52];
    char b[52];
    char c[102];
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {

        scanf("%s", a);
        scanf("%s", b);
        int len_a = strlen(a);
        int len_b = strlen(b);
        int i;
        if (len_a < len_b)
        {
            for (i = 0; i < len_a; i++)
            {
                c[0] = a[0];
                if (i % 2 == 0)
                {
                    c[i] = a[i];
                }
                else
                    c[i ] = b[i];

                printf("i: %c %c\n", a[i],b[i]);
            }
        //     for (i = 1; i < len_a; i += 2)
        //     {
        //         // c[i] = a[i];
        //         c[i] = b[i];
        //         printf("i: %c \n", b[i]);
        //     }
        //     int l = i;

        //     printf("i: %d\n", l);
        //     for (i = l; i < len_b; i++)
        //     {

        //         c[i] = b[i];
        //     }
        }

        printf("%s\n", c);
    }
}
