#include <stdio.h>
#include <math.h>

int main() {
    int n, c;
    if (scanf("%d", &n)!=1 || n<=1)
        return 0;

    for (int p=2; p*p<=n; ++p) {
        for (c = 0; n%p==0; ++c)
            n/=p;
        if (c>0)
            printf("%d->%d\n", p, c);
    }
    if (n>1)
        printf("%d->1\n", n);
}