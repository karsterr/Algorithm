#include <stdio.h>

int main() {
    int x, y;

    printf("First Number > ");
    scanf("%d", &x);
    printf("Second Number > ");
    scanf("%d", &y);

    int summary = x + y;
    int substraction = x - y;
    int multiplication = x * y;
    double division = x / y;

    printf("\n+ = %d\n- = %d\n* = %d\n/ = %f", summary, substraction, multiplication, division);
}
