#include <stdio.h>;
#include <string.h>

int main()
{
    char a[1000] = "air";
    char b[1000] = "air";

    int len_a = strlen(a);
    int len_b = strlen(b);
    printf("%d ", len_a);
    int c = 0;
    for (int i = 0; i < len_a; i++)
    {
        if (len_a == len_b)
        {
            if (a[i] == b[i])
            {
                c++;
            }
        }
        else if (a[i] != b[i])
        {
            if(a[i]>b[i]){
                
            }
        }
    }
    printf("%d ", c);
}