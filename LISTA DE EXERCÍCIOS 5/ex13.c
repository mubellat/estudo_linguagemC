#include <stdio.h>

int main() {
    int limiteInferior, limiteSuperior;
    int soma = 0;

    printf("Digite o limite inferior: ");
    scanf("%d", &limiteInferior);
    printf("Digite o limite superior: ");
    scanf("%d", &limiteSuperior);

    printf("Os números pares no intervalo aberto: %d e %d \n", limiteInferior, limiteSuperior);
    for (int i = limiteInferior + 1; i < limiteSuperior; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            soma += i; 
        }
    }
    printf("\nSomatória dos pares: %d\n", soma);

    return 0;
}
