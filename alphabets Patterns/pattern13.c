#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,s,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(s=0;s<i;s++){
            printf(" ");
        }for(char ch= 'A'+n-1;ch>='A'+i;ch--){
            printf("%c",ch);
        }printf("\n");
    }
    return 0;
}
/* 
EDCBA
 EDCB
  EDC
   ED
    E*/