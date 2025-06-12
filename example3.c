#include<stdio.h>
int main(){
    float x1,x2,y1,y2,mid_x,mid_y;
    printf("Enter a number of x1:");
    scanf("%f",&x1);
    printf("Enter a number of y1:");
    scanf("%f",&y1);
    printf("Enter a number of x2:");
    scanf("%f",&x2);
    printf("Enter a number of y2:");
    scanf("%f",&y2);
    mid_x=(x1+x2)/2;
    mid_y=(y1+y2)/2;
    printf("location:%0.1f,%0.1f",mid_x,mid_y);

    return 0; 
}