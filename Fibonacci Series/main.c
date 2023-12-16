#include <stdio.h>

int a = 0, b = 1;

void fibonacci(int x){
    if (x < 3){
        return;
    }
    int c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
    return fibonacci(x-1);
}

void getFibonacci(int x){
    if (x < 1){
        printf("Invalid element count\n");
    }
    else if (x == 1) {
        printf("%d ", 0);
    }
    else if (x == 2) {
        printf("%d %d", 0, 1);
    }
    else {
        printf("%d %d ", 0, 1);
        fibonacci(x);
    }
}

int main(){
    int n = 0;
    printf("Element Count of Fibonacci Series > ");
    scanf("%d", &n);
    getFibonacci(n);
    return 0;
}