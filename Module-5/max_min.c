#include <stdio.h>
int main()
{

    int p, q, r;
    scanf("%d%d%d", &p, &q, &r);

    if (p <= q && p <= r)
    {
        printf("%d", p);
    }
    else if (q <= q && q <= r)
    {
        printf("%d", q);
    }
    else
        printf("%d", r);

    printf(" ");
    
    if (p >= q && p >= r)
    {
        printf("%d", p);
    }
    else if (q >= q && q >= r)
    {
        printf("%d", q);
    }
    else
        printf("%d", r);
}