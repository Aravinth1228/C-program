#include<stdio.h>
void harshat(int n) {
    int sum = 0, digit, original = n;

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    if (original % sum == 0) {
        printf("%d is a Harshad number.\n", original);
    } else {
        printf("%d is not a Harshad number.\n", original);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    harshat(n);
    return 0;
}