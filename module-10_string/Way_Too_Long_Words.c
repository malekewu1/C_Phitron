#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        // printf("%s\n", str);
        int cnt = 0;
        while (str[cnt] != ('\0'))
        {
            cnt++;
        }
        // printf("length: %d\n",cnt);
        if (cnt > 10)
        {
            printf("%c", str[0]);
            printf("%d", cnt - 2);
            printf("%c", str[cnt - 1]);
        }
        else
            printf("%s", str);

        printf("\n");
    }
}