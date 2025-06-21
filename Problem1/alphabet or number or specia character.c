#include<stdio.h>
int main(){
    char n;
    printf("Enter the character: ");
    scanf(" %c", &n); 

    if((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')){
        printf("%c is an alphabet", n);
    }
    else if(n >= '0' && n <= '9'){
        printf("%c is a number", n);
    }
    else {
        printf("%c is a symbol", n);
    }
    return 0;
}