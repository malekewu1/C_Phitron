#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int year = temp / 365;
    temp -= (year * 365);
    printf("%d years\n", year);

    int month = temp / 30;
    temp -= (month * 30);
    printf("%d months\n", month);

    int day = temp;
    printf("%d days\n", day);
}
