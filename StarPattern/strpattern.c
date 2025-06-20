#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,s,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(s=1;s<=i;s++){
            printf(" ");
        }for(j=0;j<5;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}
/*
*****
 *****
  *****
   *****
    ***** */