//
// Created by karsterr on 12/16/23.
//

#include <stdio.h>

int main(){
    int x;

    printf("Enter an integer > ");
    scanf("%d", &x);

    if (x < 0){
        printf("X is negative");
    }
    else if (x == 0) {
        printf("X is zero.");
    }
    else {
        printf("X is positive");
    }

    return 0;
}
