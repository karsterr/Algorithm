#include <stdio.h>

int main() {
    int x;

    printf("X > ");
    scanf("%d", &x);

    if (x % 2 == 0){
        printf("Plural");
    }
    else{
        printf("Single");
    }
}
