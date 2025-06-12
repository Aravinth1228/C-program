#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    (a > 0) ? printf("Positive: %d\n", a) : (a < 0) ? printf("Negative: %d\n", a) :
    (a < 0) ? printf("Negative: %d\n", a) :
              printf("Zero\n");

    return 0;
}