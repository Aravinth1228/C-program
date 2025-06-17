#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter the size of the right triangle pattern: ");
    scanf("%d", &n);
    for(i=0;i<n;++i){
        for(j=0;j< n-i;++j){
            printf("%d ", i+1);
        }
        printf("\n");
    }
    return 0;
}
// 1 1 1 1 1 
// 2 2 2 2
// 3 3 3
// 4 4
// 5