#include <stdio.h>
#define PI 3.14

int main() {
    int r = 0;
    double circumference,area;

    printf("Radius > ");
    scanf("%d", &r);

    circumference = 2 * PI * r;
    area = PI * r * r;

    printf("Circumference : %f\nArea : %f",circumference, area);
    return 0;
}
