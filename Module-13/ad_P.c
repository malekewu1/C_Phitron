#include<stdio.h>
#include<math.h>


int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    
    int *p=&a,*q=&b,diff=0;
    diff=((*p-*q));
    if(diff<0){
        diff=diff*-1;
    }
    printf("%d\n",diff);

}