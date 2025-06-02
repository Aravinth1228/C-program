#include<stdio.h>

int main(){
 int a=10,*p,*q
;
p=&a;
q=p+2;
printf("\nEnter a p Value: %d",*p);
printf("\nEnter a q Value: %d",*q);

return 0;
}