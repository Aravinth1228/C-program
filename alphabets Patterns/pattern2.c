#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        char ch='a'+i-1;
        for(j=1;j<=i;j++){
            printf("%c",ch);
             ch--;
        }printf("\n");    }
    return 0;
}
/*a
ba
cba
dcba
edcba*/