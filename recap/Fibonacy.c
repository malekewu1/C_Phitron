#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int first = 0, second = 1;
    printf("%d %d ",first,second);

    for (int i = 0; i < n ; i++)
    {
        int fibo = i + (i+1);
        first = second;
        second = fibo;

        printf("%d ", fibo);
    }
}