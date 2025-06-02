#include<stdio.h>

void display();
int a=10;
int main(){
    printf("\nEnter the value of A :%d", a);
    display();
    return 0;
}
void display(){

    a++;
    printf("\nEnter the value of A :%d", a);
}