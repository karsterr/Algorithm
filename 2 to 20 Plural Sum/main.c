#include <stdio.h>

int main() {
    int result = 0;
    for (int i = 2; i <= 20; i++){
        if (i % 2 == 0){
            result += i;
        }
    }
    printf("Result : %d", result);
}
