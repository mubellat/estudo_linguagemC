#include <stdio.h>

int main () {

    float saldo, reaj;

    printf("Digite o valor do saldo:");
    scanf("%f", &saldo);

    reaj = saldo + (saldo * 0.01);

    fflush(stdin);
    printf("Valor do saldo com reajuste de 1%% : %2.f ", reaj);

    return 0;
}