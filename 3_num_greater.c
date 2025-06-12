#include <stdio.h>
int main() {
    int a, b, c,total;
    printf("Enter the numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    total = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    printf("Greatest value is %d\n", total);

    return 0;
}