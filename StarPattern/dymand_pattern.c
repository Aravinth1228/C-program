#include <stdio.h>

int main() {
    int n, i, j, l;
    printf("Enter the size of the diamond pattern: ");
    scanf("%d", &n);

    for (i = -n; i <= n; i++) {
        l = i < 0 ? -i : i;

        for (j = 0; j < l; j++)
            printf("  ");

        for (j = 0; j < 2 * (n - l) + 1; j++)
            printf("* ");

        printf("\n");
    }
    return 0;
}
//       *
//     * * *
//   * * * * *  
// * * * * * * * 
//   * * * * *
//     * * *
//       *