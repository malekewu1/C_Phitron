#include<stdio.h>

#include<stdlib.h>

int main(){
int n;
scanf("%d",&n);

int *ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL){
    return 0;
}
for(int i=0;i<n;i++){
    scanf("%d",(ptr+i));
}
for(int i=0;i<n;i++){
    printf("%d ",*(ptr+i));
}
printf("\n");
//printf("\nenter new N\n");
int m;
scanf("%d",&m);
int *p=(int*)realloc(ptr,m*sizeof(int));

for(int i=n;i<m;i++){
    scanf("%d",(ptr+i));
}

for(int i=0;i<m;i++){
    printf("%d ",*(p+i));
}

}
/*
input
3
20 5 1 
8
0 10 20 30 5

output
20 5 1 
20 5 1 0 10 20 30 5 

*/