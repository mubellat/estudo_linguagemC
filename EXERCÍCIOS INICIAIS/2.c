#include <stdio.h>

int main(){
    printf("Bem-vindo a programação em C!\n");
    printf("\tHello Word!");
    int inteiro1, inteiro2, soma;
    printf("Entre com o primeiro inteiro\n");
    scanf("%d", &inteiro1);
    printf("Entre com o segundo inteiro\n");
    scanf("%d", &inteiro2);
    soma = inteiro1 + inteiro2;
    printf("A soma é %d + %d é %d",inteiro1, inteiro2, soma);
    return 0;

}

