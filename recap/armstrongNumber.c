#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int arm=0;
    while(temp!=0){
        int r=temp%10;
        arm+=pow(r,3);
        temp=temp/10;
    }
    if(n==arm)
    printf("armstrong: %d",arm);
    else 
    printf("NO armstrong");
}