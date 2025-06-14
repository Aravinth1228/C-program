#include <stdio.h>

int main(){
    int num;

    printf("enter the 5digit number; ");
    scanf("%d",&num);
     
    while(num ){
        int c=num%10;
        printf("%d",c);
        
    } 

}