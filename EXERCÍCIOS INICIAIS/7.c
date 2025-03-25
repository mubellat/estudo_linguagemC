#include <stdio.h>

int main(){
    int inteiro1, inteiro2, inteiro3, inteiro4, soma;
    printf("Entre com o primeiro inteiro\n");
    scanf("%d", &inteiro1);
    printf("Entre com o segundo inteiro\n");
    scanf("%d", &inteiro2);
    printf("Entre com o terceiro inteiro\n");
    scanf("%d", &inteiro3);
    printf("Entre com o quarto inteiro\n");
    scanf("%d", &inteiro4);
    soma = inteiro1 + inteiro2 + inteiro3 + inteiro4;
    printf("A soma de %d + %d + %d + %d é %d", inteiro1, inteiro2, inteiro3, inteiro4, soma);
    return 0;
}
