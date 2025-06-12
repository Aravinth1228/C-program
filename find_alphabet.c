#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? printf("This is an alphabet: %c\n", ch) :    printf("This is not an alphabet: %c\n", ch);
       
    

    return 0;
}