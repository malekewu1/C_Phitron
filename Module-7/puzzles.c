#include<stdio.h>

int main(){

   long long p,q,r,s;
    scanf("%lld%lld%lld%lld",&p,&q,&r,&s);

    if((p+q+r)==s){
       printf("YES"); 
    }
    else if((p+q-r)==s){
       printf("YES"); 
    }
    else if((p+q*r)==s){
       printf("YES"); 
    }
    else if((p-q+r)==s){
       printf("YES"); 
    }
    else if((p*q+r)==s){
       printf("YES"); 
    }

/////
    else if((p-q-r)==s){
       printf("YES"); 
    }
    else if((p-q+r)==s){
       printf("YES"); 
    }
    else if((p-q*r)==s){
       printf("YES"); 
    }
    else if((p+q-r)==s){
       printf("YES"); 
    }
    else if((p*q-r)==s){
       printf("YES"); 
    }

/////
    else if((p*q*r)==s){
       printf("YES"); 
    }
    else if((p*q+r)==s){
       printf("YES"); 
    }
    else if((p*q-r)==s){
       printf("YES"); 
    }
    else if((p+q*r)==s){
       printf("YES"); 
    }
    else if((p-q*r)==s){
       printf("YES"); 
    }

    //
    else if((-p-q-r)==s){
       printf("YES"); 
    }
    else if((-p+q-r)==s){
       printf("YES"); 
    }
    else if((-p-q+r)==s){
       printf("YES"); 
    }
    else if((-p+q+r)==s){
       printf("YES"); 
    }
     else if((-p*q*r)==s){
       printf("YES"); 
    }
     else if((-p*q+r)==s){
       printf("YES"); 
    }
     else if((-p+q*r)==s){
       printf("YES"); 
    }
    else if((-p*q-r)==s){
       printf("YES"); 
    }
    else if((-p-q*r)==s){
       printf("YES"); 
    }
    
   
    else printf("NO");

    
}