#include <stdio.h>

int main(){
     int end;
    int sum=0;
     printf("Enter the limit: ");
     scanf("%d",&end);
    for (int num=1;num<=end;num++){
         sum+=num;
       
    }
     printf("\n%d",sum);
    return 0;
}