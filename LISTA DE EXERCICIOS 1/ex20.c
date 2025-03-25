#include <stdio.h>

int main () {

    float dep, juros, rend, total;

    printf("Digite o valor do depósito:");
    scanf("%f", &dep);

    fflush(stdin);
    printf("Digite a porcentagem do juros:");
    scanf("%f", &juros);

    rend = dep * ( juros / 100);

    total = dep + rend;

    printf("Valor do rendimento: R$ %.2f \n",rend);
    printf("Valor total: R$ %.2f \n", total);

    return 0;
}