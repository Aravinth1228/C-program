#include<stdio.h>
int main(){
    int a=10,*p;
    *p=&a;
    printf("\nEnter a Value A :%d",a);
    printf("\nEnter a Value A :%d",&a);
    printf("\nEnter a Value P :%d",*p);


    return 0;
}