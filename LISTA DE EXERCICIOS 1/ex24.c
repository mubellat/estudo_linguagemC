#include <stdio.h>

int main () {

    int num_cc, cent, dez, uni, inv , num, n1, n2, n3, num_fin, digito_final;

    printf("Digite o número de 3 dígitos da sua conta corrente:");
    scanf("%d", &num_cc);

    cent = num_cc / 100;
    dez = ( num_cc % 100 ) / 10;
    uni = ( num_cc % 10 ) / 1;

    inv = (uni * 100) + (dez * 10) + (cent * 1);

    num = num_cc + inv;

    n1 = num / 100;
    n2 = ( num % 100 ) / 10;
    n3 = ( num % 10 ) / 1;

    num_fin = (n1 * 1) + (n2 * 2) + (n3 *3);

    digito_final = ( num_fin % 10 ) / 1;

    printf("O dígito verificador da conta com número %d é: %d !",num_cc ,digito_final);
    return 0;
}