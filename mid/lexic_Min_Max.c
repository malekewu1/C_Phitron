#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001];
    char s2[1001];
    char s3[1001];
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    int r1 = strcmp(s1, s2);
    int r2 = strcmp(s1, s3);
    int r3 = strcmp(s2, s3);

    //printf("r1 %d\nr2 %d\nr3 %d\n", r1, r2, r3);

    char max[1001];
    char min[1001];

    if (r1 >= 0 && r2 >= 0)
    {
        strcpy(max, s1);
        if (r3 <= 0)
        {
            strcpy(min, s2);
        }
        else
        {
            strcpy(min, s3);
        }
    }

    else if (r1 <= 0 && r2 <= 0)
    {
        strcpy(min, s1);
        if (r3 >= 0)
        {
            strcpy(max, s2);
        }
        else
        {
            strcpy(max, s3);
        }
    }

    else if (r2 <= 0)
    {
        strcpy(min, s2);
        strcpy(max, s3);
    }
    else if (r2 >= 0)
    {
        strcpy(max, s2);
        strcpy(min, s3);
    }

    printf("%s\n", min);
    printf("%s\n", max);
}