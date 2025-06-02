#include<stdio.h>

void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;


}
int main(){
    int a,b;
    printf("\nEnter the value of A & B:");
    scanf ("%d%d",&a,&b);
    printf("\nEnter the Before Value A :%d |B :%d",a,b);
    swap(&a,&b);

    printf("\nEnter the Before Value A :%d |B :%d",a,b);
   


    return 0;
}