#include<stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);


    //744,47
    int t=a;
    int c=0;
    while(t!=0){
        int r=t%10;
     
        if((r!=4 )&&( r!=7)  ){
            c=1;
            printf("break\n");
            break;
        }
        t=t/10;
        printf("%d \n",r);
    }
    if(c!=1) printf("ans: %d ",a);
}
