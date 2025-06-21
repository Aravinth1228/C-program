#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,n,s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(s=0;s<n-i-1;s++){
            printf(" ");
        }for(j=0;j<=i;j++){
            printf("%c",'A'+j);
        }printf("\n");
    }
    return 0;
}
/*
    A
   AB
  ABC
 ABCD
ABCDE*/