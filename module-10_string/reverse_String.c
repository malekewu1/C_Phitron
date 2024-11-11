#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);

    //printf("%s\n",str);
    for(int l=0,r=n-2;l<r;l++,r-- ){
        int temp=str[l];
        str[l]=str[r];
        str[r]=temp;
    }
    printf("%s",str);

}