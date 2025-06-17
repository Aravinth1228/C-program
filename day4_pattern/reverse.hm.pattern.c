#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter the size of the right triangle pattern: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = n; j >= i ; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
/*
5 4 3 2 1 0 
5 4 3 2 1
5 4 3 2
5 4 3
5 4
 */