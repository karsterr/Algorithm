#include <stdio.h>

double custom_sqrt(double x) {
    double guess = x / 2.0;
    double epsilon = 0.000001;

    while ((guess * guess - x) > epsilon || (x - guess * guess) > epsilon) {
        guess = (guess + x / guess) / 2.0;
    }

    return guess;
}

int main() {
    int x, y;

    printf("X and Y > ");
    scanf("%d %d", &x, &y);

    double hypotenuse = custom_sqrt((double)(x * x + y * y));
    printf("Hypotenuse: %lf\n", hypotenuse);

    return 0;
}
