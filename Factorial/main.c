#include <stdio.h>

long factorial(int n){
    if (n == 0) {
        return 1;
    }
    else {
        return (n * factorial(n - 1));
    }
}

int main() {
    // Variables
    int n = 0;
    int result;

    printf("n > ");
    scanf("%d", &n);

    result = factorial(n);
    printf("Result : %d", result);

    return 0;
}
