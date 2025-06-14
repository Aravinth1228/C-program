#include <stdio.h>

int main(){


     int end;
     int odd=0;
     int even=0;
     int oddtotal=0;
     int eventotal=0;
     printf("Enter the limit: ");
     scanf("%d",&end);
    for (int num=1;num<=end;num++){
   

        if (num%2==0){
        printf("\n%d is the even number",num);
        even+=1;
        eventotal+=num;
        }
        else{
            printf("\n%d is the odd number",num);
            odd+=1;
            oddtotal+=num;
        }
       
    }
         printf("\n%d even numbers",even);
         printf("\n%d odd numbers",odd);
         printf("\n%d eventotal numbers",eventotal);
         printf("\n%d oddtotal numbers",oddtotal);
    return 0;
}