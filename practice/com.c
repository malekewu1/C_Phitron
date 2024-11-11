#include <stdio.h>
#include <stdbool.h>

int main()
{
    int p, q;
    char c;
    bool r;
    scanf("%d %c %d", &p, &c, &q);

    if (c == '<')
        r = p < q;
    else if (c == '>')
        r = p > q;
    else if (c == '=')
        r = (p == q);
    if (r)
        printf("Right");
    else
        printf("Wrong");
}
