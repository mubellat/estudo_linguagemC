#include <stdio.h>

int main() {

    char nome[100], endereco[100], telefone[100];

    printf("Digite seu nome: ");
    gets(nome);

    fflush(stdin);
    printf("Digite seu endereço: ");
    gets(endereco);

    fflush(stdin);
    printf("Digite seu telefone: ");
    gets(telefone);

    printf("Seu nome é: %s ! \n", nome);
    printf("Seu endereço é: %s ! \n", endereco);
    printf("Seu número de telefone é: %s ! \n", telefone);
    return 0;
}