#include <stdio.h>

int main() {
    int x, y;
    double z;

    printf("Bigger value will be divided by smaller value\n");
    printf("X > ");
    scanf("%d", &x);
    printf("Y > ");
    scanf("%d", &y);

    if (x % y == 0 || y % x == 0){
        printf("Fully Dividable");
    }
    else{
        printf("Not Fully Dividable");
    }

    return 0;
}
