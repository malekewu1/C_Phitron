#include <stdio.h>
int main()
{
    int len;
    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // printf("\nlen: %d \n", len);
    // printf("\nafter insert\n");
    // printf("l/2: %d\n", len / 2);
    for (int i = 0; i < len / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}
