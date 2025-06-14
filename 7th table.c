#include <stdio.h>

int main(){

    int a;
    printf("enter the number: ");
    scanf("%d", &a);


    for(int i=1;i<=a;i++){
      
        printf("\n%d * 7 = %d ",i,i*7);
    }
}