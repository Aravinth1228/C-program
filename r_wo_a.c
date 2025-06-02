#include<stdio.h>
int add();
int main(){
    int a;
    a=add();
   printf("\nTotal:%d",a);
    return 0;

}
 int add(){
     int a,b,c;
     printf("\nEnter a Vlues Of A & B: ");
     scanf("%d%d",&a,&b);
    return a+b;
 }