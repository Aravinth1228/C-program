#include<stdio.h>
int main(){
    int a=10,*p;
    int **q;
    p=&a;
    printf("\nEnter a Value A      :%d",a);
    printf("\nEnter a Address of A :%d",&a);
    printf("\nEnter a Value P      :%d",p);
    printf("\nEnter a Address of P :%d",&p);
    printf("\n-----------------------------");

    q=&p;
    printf("\nEnter a Value p    :%d",p);
    printf("\nEnter a Address of p :%d",&p);
    printf("\nEnter a Value Q      :%d",q);
    printf("\nEnter a Address of Q :%d",&q);
    printf("\n-----------------------------");


    return 0;
}