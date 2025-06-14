#include <stdio.h>

int main(){
    float a,b,result;
    int c;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the OPERATION\n1.ADDITION\n2.SUBTRATION\n3.MULTIPLICATION\n4.DIVISION: \n");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        result=a+b;
        printf("ADDITION OF TWO NUMBER: %.2f",result);
        break;
    case 2:
        result=a-b;
        printf("SUBTRACTION OF TWO NUMBER: %.2f",result);
        break;
    
    case 3:
        result=a*b;
        printf("MULTIPLICATION OF TWO NUMBER: %.2f",result);
        break;
    case 4:
        result=a/b;
        printf("DIVISION OF TWO NUMBER: %.2f",result);
        break;
    
    default:
        printf("invalid operator");
    }

}