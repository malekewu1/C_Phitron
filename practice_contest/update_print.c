#include <stdio.h>
void update(int n, int arr[])
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main()
{
    int n, x, v;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d%d", &x, &v);
    arr[x] = v;
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    update(n, arr);
    for (int i = 0; i < n; i++)
    {  
        printf("%d ", arr[i]);
    }
}