#include <stdio.h>

int main () {

    int num, tpart;

    printf("Vamos calcular a terça parte de um inteiro, escolha um número:");
    scanf("%d", &num);

    tpart = num / 3;

    printf("A terça parte de %d é igual a: %d !", num, tpart);
    return 0;
}