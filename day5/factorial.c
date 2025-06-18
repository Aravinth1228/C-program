#include<stdio.h>
void Factorial(int n) {
    int i, fact = 1;
   
    for(i = 1; i <= n; i++) {
        fact *= i; 
    }
    printf("Factorial of %d is: %d\n", n, fact);
}
int main(){
    int a;
    scanf("%d", &a);
    Factorial(a);
    return 0;
}