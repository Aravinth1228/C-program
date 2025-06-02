#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,n;
  printf("\nEnter the limite:");
  scanf("%d",&n);
  int *p=(int *)calloc(n,sizeof(int ));
  if (p == NULL){
    printf("\nError");
    exit(1);

  }
  for(i=0;i<n;i++){
     printf("\nEnter your Value:");
      scanf("%d",*p+i);
  }
  for(i=0;i<n;i++){

    printf("%d",*(p+i));
  }


    return 0;
}