// 

#include<stdio.h>
int main()
{
    char str[20];
    gets(str);
    //fgets(str, sizeof(str),stdin);
    //scanf("%s",&str);
    printf("%s",str);
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     char str[20];
//     scanf("%c",&str);
//     printf("%s",str);
//     return 0;
// }