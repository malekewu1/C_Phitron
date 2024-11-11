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
printf("\nenter new N\n");
scanf("%d",&n);
int *p=(int*)realloc(ptr,n*sizeof(int));

for(int i=0;i<n;i++){
    scanf("%d",(ptr+i));
}

for(int i=0;i<n;i++){
    printf("%d ",*(p+i));
}

}