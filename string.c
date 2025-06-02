#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    printf("Enter the String:" );
    gets(c);
    printf("\nLength: %d ",strlen(c) );
    printf("\nReverse : %s ",strrev(c) );
    printf("\nUppercase : %s ",strupr(c) );
    printf("\nLowercase: %s ",strlwr(c) );
    return 0;
}