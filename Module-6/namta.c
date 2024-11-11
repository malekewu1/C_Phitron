#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        int mul = 1;
        for (int i = 1; i <= 10; i++)
        {
            mul = j * i;
            printf("%d x %d=%d\n", j, i, mul);
        }
        printf("\n");
    }
}