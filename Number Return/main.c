#include <stdio.h>

int main() {
    int x;

    printf("X > ");
    scanf("%d", &x);

    for(int i = 0; i < (x*2); i++){
        printf("%d\n",x);
    }
}
