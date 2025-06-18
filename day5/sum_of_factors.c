    #include<stdio.h>
    void sum_of_factorial(int n) {
    int factor = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factor *= i;
        }
    }
    printf("sum of factors of %d is: %d\n", n, factor);
}
    int main(){
        int num;
        printf("Enter a positive integer: ");
        scanf("%d", &num);
        sum_of_factorial(num);
        return 0;   
    }