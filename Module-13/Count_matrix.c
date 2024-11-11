#include <stdio.h>
int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 0; k < x; k++)
    {
        int p,flag=0;
        scanf("%d",&p);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] ==p)
                {
                    flag ++;
                }
            }
        }
        
        printf("%d\n",flag);
    }
    
    }
    
