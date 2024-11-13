#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[1005];
    scanf("%s", str);

    int flag = is_palindrome(str);
    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}