#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (0< a[i])
        {
            a[i]=1;
        }
        else if(0> a[i]){
            a[i]=2;
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
