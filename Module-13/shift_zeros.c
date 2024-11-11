#include <stdio.h>
void prit_array(int n,int a[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void shift(int n, int arr[])
{

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c++;
        }
    }
    // printf("%d\n",c);
    int a[n], j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {

            a[j++] = arr[i];
        }
    }
    // printf("%d\n", j);
    for (int i = j; i < n; i++)
    {
        a[i] = 0;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    prit_array(n,a);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    shift(n, arr);
}