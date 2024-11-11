#include <iostream>
using namespace std;
#include<math.h>

int sum(int a, int b)
{
    int s = a + b;
    return s;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int fact_n = factorial(n);
    cout << fact_n << endl;

    int fact_r = factorial(r);
    cout << fact_r << endl;

    int fact_n_r = factorial(n - r);
    cout << fact_n_r << endl;
    return fact_n / (fact_r * fact_n_r);
}
void prime(int n){
    int c=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            c=1;
            break;
        }
    }
    if(c==0){
    cout<<"prime: "<< n<<endl;
    }

    else {
        cout<<"Not prime: "<< n<<endl;
        }

}

void primeN(int n){
    for(int i=2;i<=n;i++){
        prime(i);
    }
}

int main()
{
    //
    // int n = 8, r = 2;
    // cout << endl
    //      << factorial(5);

    // cout << endl
    //      << ncr(n, r);
    int n;
    cin>>n;
   // prime(4);
    primeN(n);
    
}
