#include <stdio.h>

int main() {
    int n, i, primeiro = 1, segundo = 1, proximo;

    printf("Informe o número de termos da série de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Informe um numero (inteiro positivo).\n");
    } else {
        printf("Série de Fibonacci com %d termos:\n", n);

        for (i = 1; i <= n; i++) {
            if (i == 1 || i == 2) {
                printf("1");
            } else {
                proximo = primeiro + segundo;
                printf("%d ", proximo);
                primeiro = segundo;
                segundo = proximo;
            }
        }
    }

    return 0;
}
