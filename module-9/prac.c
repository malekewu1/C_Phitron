#include <stdio.h>
#include <string.h>
int main()
{
    char a[1002];
    char b[1002];

    scanf("%s", a);
    int n = strlen(a);
    strcpy(b, a);

    strrev(a);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = 1;
            printf("i=%d\n", i);
            break;
        }
    }
    if (flag == 0)
        printf("YES");
    else
        printf("NO");
}
