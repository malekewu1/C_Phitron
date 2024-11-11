#include <stdio.h>
#include <string.h>
int main()
{
    char a[10002];
    char b[102] = "hello";

    scanf("%s", a);
    int len_a = strlen(a);
    int j = 0;
    for (int i = 0; i < len_a; i++)
    {
        if (a[i] == b[j])
        {
            // printf("%c %c\n",a[i],b[j]);
            j++;
        }
    }
    int len_b = strlen(b);
    //printf("b=%d j=%d\n", len_b, j);
    if (j == len_b)
    {
        printf("YES");
    }
    else
        printf("NO");
}