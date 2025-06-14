#include <stdio.h>

int main()
{
    int n;                  
    int first = 0;         
    int second = 1;        
    int next;             

    printf("Enter number of terms: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Please enter a number greater than 0.");
    }
    else if (n == 1) {
        printf("Fibonacci Series: %d\n", first);
    }
    else {
     
        printf("Fibonacci Series: %d %d ", first, second);

 
        for(int i = 3; i <= n; i++) {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }
    return 0;
}
