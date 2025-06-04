#include<stdio.h>
union demo{
    int a;
    char b;

}d;
int main(){
   d.a=65;
   d.b='M';
   printf("\nValue of A:%d",d.a);
   printf("\nValue of B:%c",d.b);
    return 0;
}