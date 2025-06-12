#include<stdio.h>
int main(){
int n ,i,j, size, d;
printf("Enter the NUmber :")
;scanf("%d",&n);
size = n * 2 -1;
for(i=0 ;i<size ;i++){
    for(j=0;j<i;j++){
        d=i<j?i:j;
        d=d<size-1-i?d:size-1-i;
        d=d<size-1-j?d:size-1-j;
  printf("%d ", n - d);
    }printf("\n");
}

    return 0;
}