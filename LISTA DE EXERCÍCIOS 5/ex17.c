#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um número (inteiro positivo): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um número (inteiro positivo). \n");
    } else {
        printf("Divisores de %d: \n", n);
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
