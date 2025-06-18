#include <stdio.h>
#include <math.h>

void armstrong(int n) {
    int temp = n;
    int digit = 0, sum = 0;
    // Count the number of digits
    while (temp > 0) {
        temp = temp / 10;
        digit++;
    }

    temp = n;
    // Calculate sum of powers
    while (temp > 0) {
        sum += pow(temp % 10, digit);
        temp = temp / 10;
    }

    if (sum == n) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}