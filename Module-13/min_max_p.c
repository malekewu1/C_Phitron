#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int *p = &a, *q = &b, *r = &c;
    int max, min;
    if (*p >= *q && *p >= *r)
    {
        max = *p;

        if (*q <= *r)
        {
            min = *q;
        }
        else
        {
            min = *r;
        }
    }
    else if (*p <= *q && *p <= *r)
    {
        min = *p;

        if (*q <= *r)
        {
            max = *r;
        }
        else
        {
            max = *q;
        }
    }
    else
    {
        if (*q <= *r)
        {
            max = *r;
            min = *q;
        }
        else
        {
            max = *q;
            min = *r;
        }
    }
    printf("%d %d", min, max);
}