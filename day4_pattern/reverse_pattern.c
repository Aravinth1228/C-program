#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = n - i; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
/*
5
45
345
2345
12345
*/