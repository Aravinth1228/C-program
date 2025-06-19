#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char start = 'A' + n - 1;
    int i, j;

    for (i = 1; i <= n; i++) {
        char ch = start;
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        char ch = start;
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}
/*E
ED
EDC
EDCB
EDCBA
EDCB
EDC
ED
E*/