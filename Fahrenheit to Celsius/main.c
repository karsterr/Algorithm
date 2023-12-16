#include <stdio.h>

int main() {
    // T(°C) = (T(°F) - 32) / (9/5)
    double fahrenheit, celsius;

    printf("Fahrenheit > ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;
    printf("Celsius : %f", celsius);
    return 0;
}
