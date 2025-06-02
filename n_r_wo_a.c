#include<stdio.h>
void add();
int main(){
  add();
    return 0;

}
 void add(){
     int a,b,c;
     printf("\nEnter a Vlues Of A & B: ");
     scanf("%d%d",&a,&b);
     c=a+b;
     printf("\nTotal: %d",c);
 }