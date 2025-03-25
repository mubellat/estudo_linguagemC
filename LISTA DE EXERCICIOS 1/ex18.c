#include <stdio.h>

int main () {

    float desp, valor_fin;

    printf("Digite o valor das depesas no restaurante:");
    scanf("%f", &desp);

    valor_fin = desp + (desp * 0.10);

    printf("Valor de todas as despesas com a gorjeta é: %.1f", valor_fin);

    return 0;
}