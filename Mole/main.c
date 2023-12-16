#include <stdio.h>

int main() {
    // mole = mass / molecular weight
    double mole, mass, molecularWeight;

    printf("Mass and Molecular Weight > ");
    scanf("%lf %lf", &mass,&molecularWeight);

    mole = mass / molecularWeight;
    printf("Mole > %lf", mole);
}
