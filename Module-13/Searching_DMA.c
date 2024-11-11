#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, p = 0;
    scanf("%d%d", &n, &x);
    int *ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    if(ptr==NULL){
    return 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    int *f = &p;
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) == x)
        {
            *f = i;
            printf("found\n");
        }
    }

    printf("%d ", *f);

    free(ptr);
}