#include <stdio.h>
#include <math.h>

int main () {

    int num, rq;

    printf("Digite um número inteiro para calcularmos a raiz quadrada: ");
    scanf("%d", &num);

    rq = sqrt(num);

    printf("A raiz quadrada de %d é igual a: %d", num, rq);
    
    return 0;
}