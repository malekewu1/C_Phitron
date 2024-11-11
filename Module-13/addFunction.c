#include <stdio.h>
#include <math.h>
void swap(int *a,int *b){
    int  temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{   int a=5,b=6;
    swap(&a,&b);
    printf("%d %d\n",a,b);
    float f = 10.5;
    printf("%.2f",round (f));
}