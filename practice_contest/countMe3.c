#include <stdio.h>
#include <string.h>
char str[100005];
void count_capital_small_digit(char str[], int *c, int *s, int *d)
{

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            (*c)++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            (*s)++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            (*d)++;
        }
        // printf("arrr\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%s", str);
        int capital = 0, small = 0, digit = 0;
        count_capital_small_digit(str, &capital, &small, &digit);
        printf("%d %d %d\n", capital, small, digit);
        
    }
    return 0;
}
