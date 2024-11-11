#include<stdio.h>


int main(){

    int x,p;

    scanf("%d %d",&x,&p);

    float orginal_price,percentice;
    percentice=x/100.00;
    orginal_price=p/(1-percentice);

    printf("%0.2f",orginal_price);



}