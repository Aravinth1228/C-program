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
            printf("%c",'A'+j);
        }printf("\n");
    }
    for(i=n-2;i>=0;--i){
        for(j=0;j<i+1;j++){
            printf("%c",'A'+j);
        }printf("\n");
    }
    return 0;
}
/*A
AB
ABC
ABCD
ABCDE
ABCD
ABC
AB
A*/