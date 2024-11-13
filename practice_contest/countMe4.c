#include <stdio.h>
#include <string.h>

void frequency_array(char str[], int f[])
{

    for (int i = 0; i < strlen(str); i++)
    {
        f[str[i] - 'a']++;
    }
}
int main()
{
    char str[100005];
    int f[26] = {0};
    scanf("%s", str);
    frequency_array(str, f);
    for (int i = 0; i < 26; i++)
    {
        if (f[i] > 0)
        {
            printf("%c - %d\n", i + 97, f[i]);
        }
    }
    return 0;
}
