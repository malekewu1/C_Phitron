#include <stdio.h>
int main()
{

    char x;
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z')
        printf("%c", x + 32);
    else
        printf("%c", x - 32);
}