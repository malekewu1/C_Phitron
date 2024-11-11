#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    int total_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            int r = temp % 10;
            sum += r;
            temp = temp / 10;
        }
        if (a <= sum && sum <= b)
        {
            total_sum += i;
            // printf("%d ",i);
        }
    }
    printf("%d", total_sum);
}