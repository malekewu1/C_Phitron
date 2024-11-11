#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int max=-1,m=-1;
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x > max)
        {
            max = x;
        }
        if(x>m && x<max){
            m=x;
        }
    }
    printf("%d  %d",max,m);
}