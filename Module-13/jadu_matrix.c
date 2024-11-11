#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (n == m)
    {
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                {

                    if (arr[i][j] != 1)
                    {
                        flag = 0;
                        // printf("flag inside %d %d\n", flag, arr[i][j]);
                    }
                }
                else if ((i + j) == (n - 1))
                {
                    // printf("%d + %d\n", i, j);
                    if (arr[i][j] != 1)
                    {
                        flag = 0;
                        // printf("flag second %d %d %d-%d\n", flag, arr[i][j], i, j);
                    }
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        flag = 0;
                    }
                }
            }
        }

        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
}
