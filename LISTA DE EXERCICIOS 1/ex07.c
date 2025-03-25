#include <stdio.h>

int main(){

    int inteiro1, inteiro2, soma;

    printf("Entre com o primeiro inteiro:\n");
    scanf("%d", &inteiro1);

    fflush(stdin);
    printf("Entre com o segundo inteiro:\n");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;
    
    printf("A soma é %d!", soma);
    return 0;
}