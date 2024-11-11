#include<stdio.h>
int main(){

int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[0])
        {
            max = arr[i];
        }
    }
    printf("max=%d\n",max);
}