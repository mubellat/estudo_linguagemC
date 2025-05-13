#include <stdio.h>

int main() {
    int A, B;

    printf("Digite um número (inteiro positivo): ");
    scanf("%d", &A);

    printf("Digite outro número (inteiro positivo): ");
    scanf("%d", &B);

    int a = A;
    int b = B;
    while (b != 0) {
        int T = b;
        b = a % b;
        a = T;
    }

    if (a == 1) {
        printf("Os números %d e %d são primos. \n", A, B);
    } else {
        printf("Os números %d e %d não são primos.", A, B);
    }

    return 0;
}
