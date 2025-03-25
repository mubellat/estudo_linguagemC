#include <stdio.h>

int main() {

    int num1, num2, produto;
    
    printf("Insira o primeiro inteiro:");
    scanf("%d", &num1);

    fflush(stdin);
    printf("Insina o segundo inteiro:");
    scanf("%d", &num2);

    produto = num1 * num2;

    printf("O produto dos inteiro %d e %d é igual a %d.", num1, num2, produto);
    return 0;
}