#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        char ch = 'A'+n-1;
        for(j=1;j<=n-i+1;j++){
            printf("%c",ch);
            --ch;
        }printf("\n");
    }
    return 0;
}
/*EDCBA
EDCB
EDC
ED
E*/