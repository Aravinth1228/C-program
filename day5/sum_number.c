#include  <stdio.h>
int main(){
    int n,sum =0;
    printf("Enter a number: ");
    scanf("%d", &n);
   while(n > 0) {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    printf("Sum of digits of %d is: %d\n", n, sum);
    return 0;
}