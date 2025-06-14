
#include <stdio.h>

int main(){
    int month,day;
    printf("Enter the month:day: ");
    scanf("%d-%d",&month,&day);

 
        if(month>=1&&month<=12){
            printf("%d is a valid month",month);
        }if(day>1 && day<31)
        else{
            printf("%d is not a valid month",month);
        }
}