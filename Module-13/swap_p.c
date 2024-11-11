#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int *p = &a, *q = &b;
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("%d %d\n", *p, *q);
}