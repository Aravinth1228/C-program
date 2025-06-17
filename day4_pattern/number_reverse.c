#include <stdio.h>
int main()
{
    int i, j, n, sum = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {          
            for (j = 0; j < n; j++)
            {
                printf("%d\t", sum);
                sum++;
            }
        }
        else
        {
            int temp = sum + n - 1;
            for (j = 0; j < n; j++)
            {
                printf("%d\t", temp);
                temp--;
                sum++;
            }
        }
        printf("\n");
    }
    return 0;
}
// 1       2       3       4       5
// 10      9       8       7       6
// 11      12      13      14      15
// 20      19      18      17      16
// 21      22      23      24      25

