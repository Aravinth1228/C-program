#include <stdio.h>

int main(){
    int day;
    printf("Enter the day: ");
    scanf("%d",&day);
    switch (day){
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tueday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("invalid");
    }
    return 0;
}