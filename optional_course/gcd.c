#include <stdio.h>
#include<math.h>

int main()
{
    double p,  g ;
    scanf("%lf", &p);
    for (double i = 1; i <= p; i++)
    {
        g =  pow(10, i) ;
        printf("%lf\n", g);
    }
    // printf("%d \n", g);
}