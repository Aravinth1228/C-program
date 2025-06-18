  #include <stdio.h>
  // Convert a decimal number to binary representation
  int main()
  {
      int n;
      scanf("%d", &n);

    for (int i = 1 << 30; i > 0; i >>= 1)
        if (n & i || i <= n)
            printf("%d", (n & i) ? 1 : 0);
        return 0;
  }
