
#include <stdio.h>
int main() {
   int i, j, rows,s;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for(s = 0; s < i; s++) {
         printf(" ");
      }
      for (j = 1; j <= rows-i; j++) {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
/*
 ****
  ***
   **
    *

*/