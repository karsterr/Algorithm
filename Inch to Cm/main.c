#include <stdio.h>

int main() {
    int inch;
    printf("Inch > ");
    scanf("%d", &inch);

    double cm = inch * 2.54;
    printf("Cm : %f", cm);
    return 0;
}
