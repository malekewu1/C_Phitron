#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int str[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &str[i]);
    }
    int c = 0;
    for (int l = 0, r = n - 1; l < r; l++, r--)
    {
        if (str[l] != str[r])
        {
            c = 1;
            break;
        }
        
    }
    if (c == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}