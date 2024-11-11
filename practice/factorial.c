#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long s=1;
    for(int i=1;i<=n;i++){

         s=s*i;
    }
    printf("%lld",s);
}