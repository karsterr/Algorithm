#include <stdio.h>
#define PI 3.14

int main() {
    //V = 1/3πr^2h
    int r, h;
    double volume;

    printf("Radius and Height > ");
    scanf("%d %d", &r, &h);

    volume = (PI * r * r * 2 * h) / 3;

    printf("Volume : %f", volume);
    return 0;
}
