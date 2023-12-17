#include <stdio.h>

int main(){
    int i, x, temp = 0;

    printf("X > ");
    scanf("%d", &x);

    for (i = 2; i <= x / 2; i++){
        if (x % i == 0){
            temp++;
            break;
        }
    }

    if (temp == 0 && x != 1){
        printf("Prime Number");
    }
    else{
        printf("Not Prime Number");
    }
    return 0;

}