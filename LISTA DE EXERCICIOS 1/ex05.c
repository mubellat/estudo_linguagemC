#include <stdio.h>

int main () {

    int num, ant, suc;

    printf("Escolha um número e vamos mostrar o sucessor e antecessor dele: \n");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("Seu antecessor é: %d !\n", ant);
    printf("Seu sucessor é: %d !\n", suc);
    return 0;
}