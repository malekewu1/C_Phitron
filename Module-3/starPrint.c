#include<stdio.h>

int main(){

    int n;

    scanf("%d",&n);
    for(int j=n;j>0;j--){
    for(int i=0;i<j;i++){
        for(int k=0;k<i;k++){
            printf("*");
        }
          printf("\n");
    }
    printf("\n");
    }
}