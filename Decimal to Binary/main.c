#include <stdio.h>

int main() {
    // Variable definitions
    int decimalValue = 0;
    int binaryValue[32];
    int i = 0;

    // Prompt user to get a decimal value
    printf("Enter value that will be converted into binary > ");
    scanf("%d", &decimalValue);

    // Binary calculation
    if (decimalValue == 0){
        printf("0");
        return;
    }

    for (;decimalValue > 0;){
        binaryValue[i++] = decimalValue % 2;
        decimalValue /= 2;
    }

    // Binary output
    for (int j = i-1; j >= 0; j--){
        printf("%d", binaryValue[j]);
    }
    return 0;
}
