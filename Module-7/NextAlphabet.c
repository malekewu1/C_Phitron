#include<stdio.h>

int main(){

    char c;

    scanf("%c",&c);
    if(c==122){
        printf("a");
    }
    else printf("%c",c+1);
}