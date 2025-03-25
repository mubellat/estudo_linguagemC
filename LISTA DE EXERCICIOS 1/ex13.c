#include <stdio.h>

int main () {

    float grau, fah, kelv;

    printf("Quantos graus você quer converter?");
    scanf("%f", &grau);

    fah = grau * 1.8 + 32;
    kelv = grau + 273.15;

    printf("Conversão em Kelvin: %.2f \n", kelv);
    printf("Conversão em Fahrenheit: %.2f \n", fah);

    return 0;
}