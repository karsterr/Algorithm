#include <stdio.h>

int main() {
    int shortBorder, longBorder, area;
    printf("Enter two border lenght of rectangle > ");
    scanf("%d %d", &shortBorder, &longBorder);
    area = shortBorder * longBorder;

    printf("Area > %d", area);
    return 0;
}
