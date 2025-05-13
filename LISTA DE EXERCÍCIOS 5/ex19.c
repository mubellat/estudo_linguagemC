#include <stdio.h>

int main() {
    int a, b, N, i, proximo, soma = 0;

    printf("Informe o primeiro termo da série de Ricci: ");
    scanf("%d", &a);
    printf("Informe o segundo termo da série de Ricci: ");
    scanf("%d", &b);

    printf("Informe a quantidade de termos (mínimo 3): ");
    scanf("%d", &N);

    if (N < 3) {
        printf("A série de Ricci precisa de pelo menos 3 termos.\n");
        return 1; 
    }

    printf("Série de Ricci: ");
    printf("%d %d ", a, b);
    soma = a + b;

    for (i = 3; i <= N; i++) {
        proximo = a + b;
        printf("%d ", proximo);
        soma += proximo;
        a = b;
        b = proximo;
    }

    printf("\nSoma dos termos: %d\n", soma);

    return 0;
}
