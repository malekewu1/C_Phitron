#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&x);
    x=x-1;
   
    for (int i = 0; i < n; i++)
    {
        if ((i) == x)
        {
           if(arr[i]==1){
            arr[i]=0;
            
           }
           else {
            arr[i]=1;
            
           } 
        }
       
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
    