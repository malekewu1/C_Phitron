#include <stdio.h>
#include <string.h>

int main()
{

    char a[1005];
    char b[1005];
    char c[1005];
    scanf("%s%s%s", a, b, c);

    int len = strlen(a);
    int count1 = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] != b[i])
        {
            count1++;
        }
        if (a[i] != c[i])
        {
            count1++;
        }
    }
    int count2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (b[i] != a[i])
        {
            count2++;
        }
        if (b[i] != c[i])
        {
            count2++;
        }
    }
    int count3 = 0;
    for (int i = 0; i < len; i++)
    {
        if (c[i] != b[i])
        {
            count3++;
        }
        if (c[i] != a[i])
        {
            count3++;
        }
    }
    int min = 0;
    if (count1 < count2 && count1 < count3)
        min = count1;
    else if (count2 < count3)
        min = count2;
    else
        min = count3;
    //printf("c1=%d c2=%d c3=%d\n", count1, count2, count3);
    printf("%d\n", min);
}
