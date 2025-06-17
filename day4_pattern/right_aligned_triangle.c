#include<stdio.h>
int main() {
    int i, j, n;
    printf("Enter the size of the right triangle pattern: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        // Print stars
        for(j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// *
// **
// ***
// ****
// *****
