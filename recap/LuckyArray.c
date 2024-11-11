#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    // found min
    for (int i = 0; i < n; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    // printf("min: %d \n", min);
    // founding min_occurrence
    int count_occurrence = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            count_occurrence++;
        }
    }
    if (count_occurrence % 2 == 0)
    {
        printf("Unlucky");
    }
    else
        printf("Lucky");
}