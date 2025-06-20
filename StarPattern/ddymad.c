#include <stdio.h>


int main() {
    int n, i, j, l , s;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = -n; i <= n; i++) {
        if (i < 0)
            l = -i;
        else
            l = i;
        for (s = 0; s < n - l - 1; s++)
            printf(" ");

        for (j = 1; j < n + 1; j++)
        {
         
         printf(" * ");
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
