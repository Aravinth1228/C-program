#include<stdio.h>
#include<stdlib.h>
int * get_val(){
  int i;
  int *ptr=(int *)malloc(3*sizeof(int));
  for(i=0;i<3;i++){
    printf("\nEnter the value:");
    scanf("%d",ptr+i);
  }
    return ptr;
}
int main(){
    int i,n=0;
    int *ptr=get_val();
    for(i=0;i<3;i++){

        n+=*(ptr+i);
    }
    printf("\nTotal:%d",n);
    free(ptr);
    ptr=NULL;
    return 0;
}