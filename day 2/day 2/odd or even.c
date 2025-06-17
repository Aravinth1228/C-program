#include <stdio.h>

// odd or even

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    if (a%2==0){
        printf("%d it is even number",a);
    }
    else{
        printf("%d it is odd number",a);
    }
}