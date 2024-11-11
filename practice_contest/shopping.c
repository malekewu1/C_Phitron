#include<stdio.h>
void new_shoes(int * m){
    *m-=500;
    printf("I will buy new shoes\nAlisa will buy new shoes");
}
void Buy_Punjabi(int *x){
    if(*x>1000){
      printf("I will buy Punjabi\n");
      *x-=1000;
      if(*x>=500){
        new_shoes(x);
      }
    }
    else printf("Bad luck!");
}


int main(){
    int n;
    scanf("%d",&n);
    Buy_Punjabi(&n);

}