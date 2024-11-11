#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int rev=0;
    while(temp!=0){
        int r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    printf("rev: %d",rev);
}