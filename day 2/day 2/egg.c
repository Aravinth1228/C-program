
/*a fruiteseller buys a dozen mango at rs..x.
he sells 1 mango at rs.y.
write a program to determine the profit  */
#include <stdio.h>

int main(){
     float buy,sold;
    printf("Enter the buy: ");
    scanf("%f",&buy);
    printf("Enter the sold: ");
    scanf("%f",&sold);
    

    float value=sold*12;
    
    if(value>buy){
        float profit=value-buy;
        printf("Profit %.2f:",profit);

    }
    else if(value==buy){
            printf("No profit,no loss");
    }
    else{
        float loss=value-sold;
        printf("loss %.2f:",loss);

    }
}