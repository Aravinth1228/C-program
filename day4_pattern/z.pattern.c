#include<stdio.h>
int main() {
    int i, j, n;
    printf("Enter the size of the Z pattern: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == n-1-i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}