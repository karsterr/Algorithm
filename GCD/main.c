#include <stdio.h>

int main() {
    int x, y, i, gcd;

    printf("Enter two integers > ");
    scanf("%d %d", &x, &y);

    for(i = 1; i <= x && i <= y; ++i) {
        if(x % i == 0 && y %i == 0)
            gcd = i;
    }

    printf("GCD of %d and %d > %d", x, y, gcd);

    return 0;
}
