#include<stdio.h>
int main(){
    int i, j, n, num;
    printf("Enter the size of the right triangle pattern: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        num = (i % 2 == 0) ? 2 : 1;
        for(j = 1; j <= i; j++){
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
    }
    return 0;
}
/*
1
2 4
1 3 5
2 4 6 8
1 3 5 7 9
*/