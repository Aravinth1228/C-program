#include<stdio.h>
enum bool{no=1,yes=2};
int main(){
    enum pont{x=19,y=65};
    enum bool a;
    enum pont b;
    a=yes;
    b=y;
    printf("\nEnter A :%d",a);
    printf("\nEnter B :%d",b);

    return 0;
}