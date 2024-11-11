#include <stdio.h>
#include<string.h>


int main()
{

     int n=100000;
    // scanf("%d", &n);

    char arr[n+1];
    scanf("%s", arr);
    int len=strlen(arr);
    int f[26]={0};
    for (int i = 0; i < 26; i++)
    {   
        f[arr[i]-97]+=1;
       // printf("%d %d \n",i, f[i]);
        
    }
    int unique_alpha=0;
    for (int i = 0; i < 26; i++)
    {   
        if(f[i]>0){
            unique_alpha++;
        printf("%d %d %c \n",i, f[i],i+97);
        }  
    }
    printf("unique_alpha=%d",unique_alpha);
}