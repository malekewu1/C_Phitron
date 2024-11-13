#include <stdio.h>
void count_frequency_array(int n, int arr[], int *c2, int *c3)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            (*c2 )++;
        }
        else if (arr[i] % 3 == 0)
        {
           (*c3) ++;
        }
    }
}
int main()
{
    int n, count2 = 0, count3 = 0;
    
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count_frequency_array(n, arr, &count2, &count3);

    printf("%d %d\n", count2, count3);
    return 0;
}
