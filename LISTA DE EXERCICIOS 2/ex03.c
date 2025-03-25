#include <stdio.h>
#include <math.h>

int main () {

    int num, exp, pot;

    printf("Digite o número base:");
    scanf("%d", &num);

    fflush(stdin);
    printf("Digite o expoente:");
    scanf("%d", &exp);

    pot = pow(num, exp);

    printf("O resultado de %d elevado a %d é igual a: %d", num, exp, pot);
    
    return 0;
}