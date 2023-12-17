#include <stdio.h>

int main() {
    int grade;

    printf("Grade > ");
    scanf("%d", &grade);

    if (grade >= 0 && grade <= 100){
        if (grade < 65){
            printf("F");
        }
        else if (grade <= 67){
            printf("D");
        }
        else if (grade <= 69){
            printf("D+");
        }
        else if (grade <= 72){
            printf("C-");
        }
        else if (grade <= 76){
            printf("C");
        }
        else if (grade <= 79){
            printf("C+");
        }
        else if (grade <= 82){
            printf("B-");
        }
        else if (grade <= 86){
            printf("B");
        }
        else if (grade <= 89){
            printf("B+");
        }
        else if (grade <= 92){
            printf("A-");
        }
        else if (grade <= 96){
            printf("A");
        }
        else{
            printf("A+");
        }
    }
    else{
        printf("Invalid Grade");
    }
    return 0;
}
