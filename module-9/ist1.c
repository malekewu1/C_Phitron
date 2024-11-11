#include <stdio.h>
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
}