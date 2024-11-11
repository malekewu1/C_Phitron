#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int search = -1, x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            search = i;
            break;
        }
    }
    printf("%d", search);
}
