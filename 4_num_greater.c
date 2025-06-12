#include <stdio.h>
int main() {
    int a, b, c,total,d;
    printf("Enter the numbers: ");
    scanf("%d%d%d%d", &a, &b, &c,&d);

    total = (a >= b && a >= c && a >= d) ? a : (b >= a && b >= c && b>= d) ? b : (c >= a && c >= d && c>= b)?c : d;
    printf("Greatest value is %d\n", total);

    return 0;
}