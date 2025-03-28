#include <stdio.h>

int main() {
    int opcao;

    while (1) {
        printf("Escolha uma Opcao:\n");
        printf("1 - opcao 1\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a opcao 1.\n");
            break;
        } 
        else if (opcao == 0) {
            printf("Voce escolheu sair.\n");
            break; 
        } 
        else {
            printf("opcao invalida. Tente novamente.\n");
        }
    }
    return 0;
}
