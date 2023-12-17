#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int main() {
    int x, y;
    printf("X and Y > ");
    scanf("%d %d", &x, &y);

    int result = multiply(x, y);
    printf("Result : %d", result);

    return 0;
}