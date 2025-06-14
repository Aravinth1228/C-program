#include <stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if ((year%4==0 && year%100 !=0)||year%400){
        printf("%d it a leap year",year);
        
    }else{
        printf("%d it a leap year",year);
    }
}