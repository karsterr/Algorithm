#include <stdio.h>

int main() {
    int age = 0;

    printf("Age > ");
    scanf("%d", &age);

    if (age > 0){
        if (age < 5){
            printf("BABY");
        }
        else if (age >= 5 && age <= 8){
            printf("CHILD");
        }
        else if (age >= 9 && age <= 17){
            printf("TEENAGE");
        }
        else if (age >= 18 && age <= 30){
            printf("YOUNG");
        }
        else if (age >= 31 && age <= 60){
            printf("ADULT");
        }
        else {
            printf("SENIOR");
        }
    }
    else{
        printf("Invalid Age!");
    }
}
