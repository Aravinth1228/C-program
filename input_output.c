#include <stdio.h>
#include <string.h> 
int main() {
    int a;
    char c;
    char name[50];
    printf("\nEnter a Number: ");
    scanf("%d", &a);

    // Clear the input buffer
    while (getchar() != '\n');

    printf("\nEnter the character: ");
    c = getchar();
    putchar(c);

    // Clear the input buffer again
    while (getchar() != '\n');

    printf("\nEnter the Name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline from fgets
    name[strcspn(name, "\n")] = '\0';

    puts(name);
    return 0;
}