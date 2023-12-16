#include <stdio.h>

int main() {
    int x, y;

    printf("First Number > ");
    scanf("%d", &x);
    printf("Second Number > ");
    scanf("%d", &y);

    double average = (x + y) / 2;
    printf("Average : %f", average);

    return 0;
}
