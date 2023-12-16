#include <stdio.h>

int main() {
    int base, height;

    printf("Base > ");
    scanf("%d", &base);
    printf("Height > ");
    scanf("%d", &height);

    double area = 0.5 * base * height;
    printf("Area > %f", area);
}
