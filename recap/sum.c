#include<stdio.h>

int main(){

    int x,y,sum=0;
    while(1){
        scanf("%d%d",&x,&y);

        if(x<=0 || y<=0){
            break;
        }
        int i;
        if(x>y){
            for(i=y;i<=x;i++){
                sum+=i;
                printf("%d ",i);
            
            }
        }
        else{
            for(i=x;i<=y;i++){
                sum+=i;
                printf("%d ",i);
            }
            
        }
        printf("sum=%d\n",sum);
        sum=0;
    }
}