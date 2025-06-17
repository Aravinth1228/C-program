#include <stdio.h>


int main(){

    int a,b,c,d;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    printf("Enter the fourth number: ");
    scanf("%d",&d);
      if (a>b && a>c && a>d){
        printf("%d is greater than %d and %d and %d",a,b,c,d);
    }
    else if (b>c && b>c && b>d){
        printf("%d is greater than %d and %d and %d",b,a,c,d);
    }
    else if (c>a && c>b && c>d){
        printf("%d is greater than %d and %d and %d",c,a,b,d);
    }
    else{
        printf("%d is greater than %d and %d and %d",d,a,b,c);
    }
return 0;
}
