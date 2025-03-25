#include <math.h>
#include <stdio.h>

int main () {
    int num, res;

    printf("Vamos calcular raiz quadrada. Digite um número inteiro positivo:");
    scanf("%d", &num);

    res = sqrt(num);

    printf("A raiz quadrada de %d é: %d",num ,res);
    return 0;
}