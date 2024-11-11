#include <stdio.h>
int arr[100000];
int main()
{
    int len;
    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nafter insert\n");

    int index, value;
    scanf("%d%d", &index, &value);
    len++;
    printf("len: %d \n",len);
    for (int i = len - 2; i >= index; i--)
    {
        arr[i+1] = arr[i ];
        printf("i=%d \n",i);
        printf("arr[i] %d \n",arr[i]);
        // printf("arr[%d]=arr[%d]\n", i, i - 1);
        // printf("arr[i]=%d arr[i-1]=%d\n", arr[i], arr[i - 1]);
    }
    arr[index] = value;

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nlen: %d \n",len);
}