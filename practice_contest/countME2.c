#include <stdio.h>
#include<string.h>
void count_consonants(char str[],int*c)
{

    for (int i = 0; i <strlen(str); i++)
    {
        if (str[i] != 'a'&& str[i] != 'e'&&str[i] != 'i'&&str[i] != 'o'&&str[i] != 'u' )
        {
            (*c)++;
        }
     //printf("arrr\n");  
    }
}
int main()
{
   char str[ 100005];
    scanf("%s", str);
    int count=0;
    count_consonants(str,&count);

    printf("%d \n",count);
    return 0;
}
