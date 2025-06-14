#include <stdio.h>

int main(){
    int hour,minute;
    printf("Enter the hour and minute: ");
    scanf("%d:%d",&hour,&minute);
    

    if ((hour>=0 && hour<=23)&&(minute>=0 && minute<=5915)){
        printf("Valid time");

    }else{
        printf("Not valid time");
    }

}