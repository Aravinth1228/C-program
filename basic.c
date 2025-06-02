#include <stdio.h>
void add(){

  int a,b,c;
  printf("\nEnter the A value:");
  scanf("%d",&a);
  printf("\nEnter the B value:");
  scanf("%d",&b);
  c=a+b;
  printf("\nTotal : %d",c);

}
int main(){
    int n,i;
    printf("\nEnter your limite:");
    scanf("%d",&n);
    for(i=0; i<n ; i++){
        add();
    }
    return 0;
}