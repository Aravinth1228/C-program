#include<stdio.h>
int main(){
    int a=10,*p;
    int **q;
    int ***r;
    p=&a;
    printf("\nEnter a Value A      :%d",a);
    printf("\nEnter a Address of A :%d",&a);
    printf("\nEnter p Value P      :%d",p);
    printf("\nEnter p Address of P :%d",&p);
    printf("\nEnter p Declaration   :%d",*p);
    printf("\n-----------------------------");

    q=&p;
    printf("\nEnter a Value p    :%d",p);
    printf("\nEnter a Address of p :%d",&p);
    printf("\nEnter a Value Q      :%d",q);
    printf("\nEnter a Address of Q :%d",&q);
    printf("\nEnter q Declaration Q :%d",**q);
    printf("\n-----------------------------");

    r=&q;
    printf("\nEnter a Value q    :%d",q);
    printf("\nEnter a Address of q :%d",&q);
    printf("\nEnter a Value r      :%d",r);
    printf("\nEnter a Address of r :%d",&r);
    printf("\nEnter r Declaration  R :%d",***r);
    printf("\n-----------------------------");


    return 0;
}