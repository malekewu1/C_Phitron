#include <stdio.h>
#include <string.h>
int main()
{
    char s [1000001];
    
    scanf("%s", s);
    int len = strlen( s);
    int count=0;
    for(int i=0;i<len;i++){
        int digit=s[i]-'0';
        count+=digit;

    }
    printf("%d",count);

}