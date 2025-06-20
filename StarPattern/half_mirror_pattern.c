#include <stdio.h>

int main() {
    int n, i, j, l;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = -n; i <= n; i++) {
        if (i < 0)
            l = -i;
        else
            l = i;

        for (j = 0; j < n + 1; j++) {
            if (j < n - l)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// * * * * * * 
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
