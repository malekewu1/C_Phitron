#include <stdio.h>
#include <string.h>
int main()
{
    char a[22];
    char b[22];

    scanf("%s", a);
    scanf("%s", b);

    int len = strcmp(a, b);
    // printf("%d\n",len);
    if (len == 0)
        printf("%s", a);
    else if (len < 0)
        printf("%s", a);

    else
        printf("%s", b);
}