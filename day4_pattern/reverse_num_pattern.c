#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter the size of the right triangle pattern: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = n; j >= n - i; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
/*
4321
432
43
4
 */