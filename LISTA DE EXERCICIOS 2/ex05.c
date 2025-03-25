#include <stdio.h>
#include <math.h>

int main () {

    int num, raiz_quadrada, elev;

    printf("Digite um número para encontrar a raiz quadrada:");
    scanf("%d", &num);

    raiz_quadrada = sqrt(num);

    elev = pow(raiz_quadrada, 2);

    printf("A raiz quadrada do seu número é: %d", raiz_quadrada);

    printf("\n O seu número elevado ao quadrado é igual a: %d", elev);

    return 0;
}