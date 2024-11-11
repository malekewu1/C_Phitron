#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    int arr[]={};
    for (int i = 0; i < n; i++)
    {
       //a[i]=a[n-i];
       arr[n-i-1]= a[i];
    //    printf("%d ",a[i]);
    //    printf("%d ",a[n-i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    printf("fhsdjuvf");

   
}