#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int str[n];
    for(int i=0;i<n;i++){
    scanf("%d",&str[i]);
    }

    for(int l=0,r=n-1;l<r;l++,r-- ){
        int temp=str[l];
        str[l]=str[r];
        str[r]=temp;
    }
    for(int i=0;i<n;i++){
    printf("%d ",str[i]);
    }

}