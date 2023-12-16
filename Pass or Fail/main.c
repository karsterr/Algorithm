#include <stdio.h>

int main() {
    int midterm = 0;
    int final = 0;

    printf("Midterm Grade > ");
    scanf("%d", &midterm);
    printf("Final Grade > ");
    scanf("%d", &final);
    double avg = ((midterm * 0.4) + (final * 0.6));

    if (avg < 49 && avg > 0){
        printf("Failed!");
    }
    else if (avg > 50 && avg < 100){
        printf("Passed!");
    }
    else{
        printf("Invalid Value!");
    }

    printf("\nAverage : %f", avg);

    return 0;
}
