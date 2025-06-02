#include <stdio.h>
int main(){
    int i, a[100], n;
    printf("\nEnter the limit: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEnter the Value: ");
        scanf("%d", &a[i]);
    }
    return 0;
}