#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
 
    if (x == 1)
    {
    }
    else

    {
        for (int j = 2; j <= x; j++)
        {
               int flag = 0;

            for (int i = 2; i <= (j / 2); i++)
            {
                if (j % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                printf("%d ", j);
        }
    }
}