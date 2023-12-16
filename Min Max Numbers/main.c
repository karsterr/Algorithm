#include <stdio.h>

int main() {
    int a, b ,c;

    printf("Enter Value > ");
    scanf("%d", &a);
    printf("Enter Value > ");
    scanf("%d", &b);
    printf("Enter Value > ");
    scanf("%d", &c);

    if (a > b && a > c){
        if (b > c){
            printf("Max : %d\nMin : %d", a, c);
        }
        else{
            printf("Max : %d\nMin : %d", a, b);
        }
    }
    else if (b > a && b > c){
        if (a > c){
            printf("Max : %d\nMin : %d", b, c);
        }
        else{
            printf("Max : %d\nMin : %d", b, a);
        }
    }
    else{
        if (a > b){
            printf("Max : %d\nMin : %d", c, b);
        }
        else{
            printf("Max : %d\nMin : %d", c, a);
        }
    }

    return 0;
}
