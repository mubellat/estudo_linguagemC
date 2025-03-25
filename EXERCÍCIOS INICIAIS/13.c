#include <stdio.h>
#include <math.h>

int main () {

    int num, log;

    printf("Digite um número inteiro para calcularmos o logaritmo: ");
    scanf("%d", &num);

    log = log10(num);

    printf("O logaritmo de %d na base 10: %d", num, log);
    
    return 0;
}