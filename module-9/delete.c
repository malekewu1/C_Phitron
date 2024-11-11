#include<stdio.h>
int main(){
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
    printf("\nlen: %d \n",len);
    printf("\nafter insert\n");

    int index, value;
    scanf("%d%d", &index);
    for(int i=index;i<len;i++){
        arr[i]=arr[i+1];
    }

    len--;
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nlen: %d \n",len);
}