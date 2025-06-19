#include <stdio.h>

int main() {
    int n;
     scanf("%d", &n);

    char ch = 'A';
    int i;
   
    for (i = 1; i <= n && ch <= 'Z'; i++, ch++) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1 && ch <= 'Z'; i--, ch++) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
/*A
BB
CCC
DDDD
EEEEE
FFFF
GGG
HH
I*/