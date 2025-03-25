#include <stdio.h>

int main () {
     
    float sal, sal_min, quant_sal;

    printf("Digite o valor do salário mínimo:");
    scanf("%f", &sal_min);

    fflush(stdin);
    printf("Qual o valor do seu salário?");
    scanf("%f", &sal);

    quant_sal = sal / sal_min ;

    printf("Quantidade de salários que você recebe: %.1f", quant_sal);

    return 0;
}