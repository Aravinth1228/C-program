// Write a program to check whether the given three sides can form a triangle or not.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the lengths of the three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sides can form a triangle
    if (a + b > c && a + c > b && b + c > a) {
        printf("The given sides can form a triangle.\n");
    } else {
        printf("The given sides cannot form a triangle.\n");
    }

    return 0;
}   