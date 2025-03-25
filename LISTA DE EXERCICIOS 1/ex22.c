#include <stdio.h>

int main () {

    float sal_min, qw, val_qw, val_fin, desc;

    printf("Digite o valor do salário mínimo:");
    scanf("%f", &sal_min);

    fflush(stdin);
    printf("Digite a quantidade de quilowatts gastos: ");
    scanf("%f", &qw);

    val_qw = (sal_min / 7) / 100;
    val_fin = qw * val_qw;
    desc = val_fin - (val_fin * 0.1);

    printf("Valor de cada quilowatt: R$ %.2f \n",val_qw);
    printf("Valor a ser pago: R$ %.2f \n",val_fin);
    printf("Valor final com desconto de 10%%: R$ %.2f", desc);

    return 0;
}