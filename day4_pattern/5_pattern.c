#include<stdio.h>
int mani(){
    int i,j,n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
        if(i>1 && j>1 && i+j<n-1){
            printf("5");  }  else {
            printf("%d ",n);
        }
      printf("\n");
    }
    return 0;   
}
// 55555
// 55515
// 55525
// 55535   
// 55545