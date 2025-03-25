#include <stdio.h>
#include <math.h>

int main () {
     
    int num, log;

    printf("Digite um número para calcularmos o logaritmo:");
    scanf("%d", &num);

    log = log10(num);

    printf("O logaritmo de %d é: %d",num, log);

    return 0;
}