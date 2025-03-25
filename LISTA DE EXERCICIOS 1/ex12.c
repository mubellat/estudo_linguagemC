#include <stdio.h>

int main () {

    float base, altura, area, peri;

    printf("Qual a base do retângulo?");
    scanf("%f",&base);

    fflush(stdin);
    printf("Qual a altura do retângulo?");
    scanf("%f", &altura);

    area = base * altura;

    peri = 2 * ( base + altura);

    printf("A area do seu retângulo é igual a %.1f ! \n" ,area);
    printf("O perimetro do seu retângulo é %.1f !",peri);

    return 0;
}