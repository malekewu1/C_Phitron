#include <stdio.h>
#include <string.h>
int main()
{
    char a[52];
    char b[52];
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {

        scanf("%s", a);
        scanf("%s", b);
        int len_a = strlen(a);
        int len_b = strlen(b);

        if (len_a == len_b)
        {
            for (int i = 0; i < len_a; i++)
            {
                printf("%c%c", a[i], b[i]);
            }
            printf("\n");
        }
        else if (len_a > len_b)
        {
            for (int i = 0; i < len_a; i++)
            {
                if (b[i] != '\0')
                {
                    printf("%c%c", a[i], b[i]);
                }
                else
                {
                    printf("%c", a[i]);
                }
            }
            printf("\n");
        }
        else
        {
            for (int i = 0; i < len_b; i++)
            {
                if (a[i] != '\0')
                {
                    printf("%c%c", a[i], b[i]);
                }
                else
                {
                    printf("%c", b[i]);
                }
            }
            printf("\n");
        }
    }
}