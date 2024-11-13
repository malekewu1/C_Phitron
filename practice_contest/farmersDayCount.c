#include <stdio.h>
int daysCount(int x, int y, int d)
{
    int less_time = d - (x * d) / (x + y);
    return less_time;
}
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int m1, m2, d;
        scanf("%d%d%d", &m1, &m2, &d);
        printf("%d\n", daysCount(m1, m2, d));
    }

    return 0;
}
