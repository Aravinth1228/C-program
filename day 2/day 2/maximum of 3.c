#include <stdio.h>


int main(){

    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the second number: ");
    scanf("%d",&c);
      if (a>b && a>c){
        printf("%d is greater than %d and %d",a,b,c);
    }
    else if (b>c && b>c){
        printf("%d is greater than %d and %d",b,a,c);
    }
    else{
        printf("%d is greater than %d and %d",c,a,b);
    }
return 0;
}
