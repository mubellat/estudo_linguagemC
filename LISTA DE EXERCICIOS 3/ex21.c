#include <stdio.h>

int main() {
    float saldo, credito;

    printf("Digite o valor do seu saldo (não pode estar com saldo negativo): ");
    scanf("%f", &saldo);

    if (saldo >= 0 && saldo <= 500) {
        credito = 0;
    }
     else if (saldo >= 501 && saldo <= 1000) 
    {
        credito = saldo * 0.30; 
    } 
    else if (saldo >= 1001 && saldo <= 3000) 
    {
        credito = saldo * 0.40;
    }
     else if (saldo > 3000) 
    {
        credito = saldo * 0.50;
    }

    printf("Saldo médio: R$ %.2f \n", saldo);
    printf("Valor do crédito: R$ %.2f ", credito);

    return 0;
}
