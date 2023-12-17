#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x, y;
    printf("X > "); scanf("%d", &x);
    printf("Y > "); scanf("%d", &y);

    for (int i = MIN(x, y); i <= MAX(x, y); i += 3)
        printf("%d\n", i);

    return 0;
}