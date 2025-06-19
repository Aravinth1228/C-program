#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    for (int i = 0; i < n; i++) {
        char ch = 'A' + n - 1 - i; 
        for (int j = 0; j < n - i; j++) {
            printf("%c", ch);
            ch--; 
        }
        printf("\n");
    }

    return 0;
}
/*EDCBA
DCBA
CBA
BA
A*/