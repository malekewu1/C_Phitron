#include <stdio.h>

int main()
{
    char str[20];
    int n;
    scanf("%d", &n);
    scanf("%s", str);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int digit = str[i]-48;
        ans = ans * 10 + digit;
        printf("str: %c\n", str[i]);
        printf("ans: %d\n", ans);
    }
    printf("%d\n", ans);
}