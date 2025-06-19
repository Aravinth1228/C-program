#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%c%c",'A'+j,'a'+j);
        }printf("\n");
    }
    return 0;
}
/*Aa
AaBb
AaBbCc
AaBbCcDd
AaBbCcDdEe*/