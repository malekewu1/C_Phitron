#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int rev = 0, r;
    while (temp != 0)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }

    if (n == rev)
        printf("palinfrome: %d", rev);
    else
        printf("NO palindrome");
}