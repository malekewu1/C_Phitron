#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int m=6,p=1;
   int flag=(n+1)/2;
   //printf("%d\n",flag);
    for(int i=1;i<=(m+n)-flag;i++){
        for(int j=1;j<=m-i+n-flag;j++){
            printf(" ");
        }
        for(int k=1;k<=p;k++){
            printf("*");
        }
        p+=2;
        printf("\n");
    }
   // p-=2;
   // printf("%d %d",p,p/2);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf(" ");
        }
        for(int k=1;k<=n;k++){
             printf("*");
        }
        
        printf("\n");
        
        
    }
}