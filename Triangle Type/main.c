#include <stdio.h>

int main() {
    int x = 0; int y = 0; int z = 0;

    printf("Border x > ");
    scanf("%d", &x);
    printf("Border y > ");
    scanf("%d", &y);
    printf("Border z > ");
    scanf("%d", &z);

    if (x == y && x == z){
        printf("Equilateral triangle");
    }
    else if ((x == y && x != z) || (y == z && y != x) || (z == x && z != y)){
        printf("Isosceles triangle");
    }

    else{
        printf("Scalene triangle");
    }

    return 0;
}
