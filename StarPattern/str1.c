#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
            for(j=1;j<=2*i-1;j++){
                printf("*");
            
        }printf("\n");
    }
    return 0;
}
/*
    *
   ***
  *****
 *******
*********
*/