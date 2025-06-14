#include <stdio.h>

int divisor(int num){
    
    int sum = 0;
    
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum = sum + i;
    }
    return sum;
}

int main ()
{
    int num1,num2;
    printf("\nEntre the 1st number:");
    scanf("%d",&num1);
    printf("\nEntre the 2st number:");
    scanf("%d",&num2);
    
    int sum1 = divisor(num1);
    int sum2 = divisor(num2);
    
    if(sum1/num1 == sum2/num2)
        printf("(%d, %d) are friendly pairs", num1, num2);
    else
        printf("(%d, %d) are not friendly pairs", num1, num2);

    return 0;
}