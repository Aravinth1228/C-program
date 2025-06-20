#include<stdio.h>
int main() {
    int i, j, n;
    printf("Enter inverted half pattern: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
      
    
        for(j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// ****
// ***
// **
// *