#include <stdio.h>

int main() {
    int n, i, j, s;
    printf("Enter the size of the square pattern: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (s = 0; s < n - i - 1; s++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (i = n - 2; i >= 0; i--) {
        for (s = 0; s < n - i - 1; s++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;}
// }
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
