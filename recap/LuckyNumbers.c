#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int e = 0;
    for (int i = a; i <= b; i++)
    {
        // 744,47
        int tem = i;
        int c = 0;
        while (tem != 0)
        {
            int r = tem % 10;

            if ((r != 4) && (r != 7))
            {
                c = 1;
                break;
            }
            tem = tem / 10;
        }
        if (c ==0){
            printf("%d ", i);
            e=1;
        }
        
    }
    if (e == 0)
        printf("-1");
}