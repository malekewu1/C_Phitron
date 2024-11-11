#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], sumarr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    for (int i = 0; i < n; i++)
    {

        sumarr[i] = arr1[i] + arr2[i];
        printf("index=%d  %d\n", i, sumarr[i]);
    }
}