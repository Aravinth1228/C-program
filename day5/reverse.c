#include<stdio.h>
int main(){
    int n,sum = 0, digit;
    printf("Enter a number: ");     
    scanf("%d", &n);
    while(n > 0){
        digit = n % 10;
        sum = sum * 10 + digit; 
        n = n / 10; 
    }
    printf("Reversed Number: %d\n", sum);
    return 0;
}