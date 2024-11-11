#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
scanf("%d",&n);
int* ptr=(int*)calloc(n,sizeof(int));

for(int i=0;i<n;i++){
    scanf("%d",ptr+i);

}
for(int i=0;i<n;i++){
    scanf("%d",ptr+i);

}
long long sum=0;
long long *s=&sum;
for(int i=0;i<n;i++){
   *s+=*(ptr+i);

}
if(*s<0)
  *s*=(-1);
printf("%lld",*s);

}