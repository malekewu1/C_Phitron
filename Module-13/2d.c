#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             scanf("%d",&arr[i][j]);
        }
    }
    int m_d=0,s_d=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // printf("%d ",arr[i][j]);
            if(i==j){
                m_d+=arr[i][j];
            }
            if((i+j)==n-1){
                s_d+=arr[i][j];
            }
        }
    }
    printf("%d",abs(m_d-s_d));
}