#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   int f[m];
    for (int j = 1; j <=m; j++)
    {   int cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(j==arr[i]){
                cnt++;
            }
        }
        f[j-1]=cnt;
        
    }
    for(int i=0;i<m;i++){
        printf("%d\n",f[i]);
    }
}