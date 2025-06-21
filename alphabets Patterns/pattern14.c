#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,n,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }for(char ch ='A'+i-1;ch >= 'A';ch--){
            printf("%c",ch);
        
        }printf("\n");
    }
    return 0;
}
/*
   A
   BA
  CBA
 DCBA
EDCBA*/