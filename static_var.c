#include<stdio.h>

void display();
int main(){
    int n,i;
    printf("\nEnter your limite:");
    scanf("%d",&n);
    for(i=0; i<n ; i++){
        display();
    }
    return 0;
}
void display(){
    static int a=2;
    a++;
    printf("\nX: %d",a);
}