#include <stdio.h>

int main() {
    int x, result;
    // Function
    printf("F(x) = 2x^2 + 5x + 32");

    // User Prompt
    printf("\nEnter x value > ");
    scanf("%d", &x);

    result = ((2 * x) * (2 * x)) + (5 * x) + 32;
    printf("Result : %d", result);
}