#include <stdio.h>

int main() {
    int numList[10];
    int x = 0;
    int sum = 0;

    for (int i = 0;i < 10; i++){
        printf("Enter value > ");
        scanf("%d", &x);
        numList[i] = x;
    }

    for (int i = 0; i < 10; i++){
        sum += numList[i];
    }

    printf("Sum > %d", sum);

    return 0;
}
