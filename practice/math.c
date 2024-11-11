#include <stdio.h>
#include <stdbool.h>

int main()
{
    int p, q, r, a;
    char c, f;

    scanf("%d %c %d %c %d", &p, &c, &q, &f, &a);

    if (c == '+')
        r = p + q;
    else if (c == '-')
        r = p - q;
    else if (c == '*')
        r = (p * q);
    if (r == a)
        printf("Yes");
    else
        printf("%d", r);
}
