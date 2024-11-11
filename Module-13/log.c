#include<stdio.h>
long long c=0;
long long log(long long n){
    if(n==1)
    return 0;
    
    c++;
    printf("%lld ",c);
    log(n/2);
    return c;
}


int main(){
    long long n;
    scanf("%lld",&n);

    long long ans=log(n);
    printf("\n %d",ans);
}