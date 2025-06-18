#include<stdio.h>
void strong( int a);
    void strong(int a) {
    int sum=0,  digit, fact;

    while(a>0){
        digit = a % 10;
        fact = 1;

        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        a /= 10;

    }

    if (sum == a) {
        printf("%d is a strong number.\n", a);
    } else {
        printf("%d is not a strong number.\n", a);
    }
}

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    strong(n);
    return 0;

}