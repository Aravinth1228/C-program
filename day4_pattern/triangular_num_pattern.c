#include<stdio.h>
int main(){
    int i, j, n, s;
    printf("Enter the size of the square pattern: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
   
        for(s=0; s<n-i-1; s++){
            printf(" ");
        }
        for(j=1; j<=i+1; j++){
            printf("%d", j);
        }
        for(j=i;j>=1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
//     1
//    121
//   12321
//  1234321
// 123454321