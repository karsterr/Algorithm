#include <stdio.h>

int main() {
    int value;
    int digit[4];
    int index = 0;

    printf("Enter 4-digit value > ");
    scanf("%d", &value);

    if (value < 1000 || value > 9999) {
        printf("Invalid Value, halting!\n");
        return 1;
    }

    else{
        int temp = value;

        while (temp > 0) {
            digit[index] = temp % 10;
            temp /= 10;
            index++;
        }

        for (int i = index - 1; i >= 0; i--) {
            printf("%d ", digit[i]);
        }
    }
    return 0;
}
