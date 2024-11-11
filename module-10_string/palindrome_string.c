#include <stdio.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    int len = 0, i = 0;
    while (str[i] != '\0')
    {
        i++;
        len++;
    }

    int c = 1;
    for (int l = 0, r = len - 1; l < r; l++, r--)
    {

        if (str[l] != str[r])
        {
           
            c = 0;
            break;
        }
    }
    if (c == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    // printf("%s", str);
}