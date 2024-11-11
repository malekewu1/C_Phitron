#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char a[51], b[51], c[102];
        scanf("%s %s", a, b);

        int len_a = strlen(a), len_b = strlen(b), index = 0;

        for (int i = 0; i < len_a || i < len_b; i++) {
            if (i < len_a) c[index++] = a[i];
            if (i < len_b) c[index++] = b[i];
        }

        c[index] = '\0';
        printf("%s\n", c);
    }

    return 0;
}

/*#include <stdio.h>
#include <string.h>

int main() {
    char a[52];
    char b[52];
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", a);
        scanf("%s", b);
        int len_a = strlen(a);
        int len_b = strlen(b);

        for (int j = 0; j < len_a + len_b; j++) {
            if (j < len_a) {
                printf("%c", a[j]);
            }
            if (j < len_b) {
                printf("%c", b[j]);
            }
        }
        printf("\n");
    }

    return 0;
}*/