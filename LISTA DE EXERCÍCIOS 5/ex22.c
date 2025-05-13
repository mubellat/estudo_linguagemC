#include <stdio.h>

int main() {
    int n, i = 1;
   float s = 0.0;

    printf("Digite o valor de N (inteiro e positivo):");
    scanf("%d", &n);

    do {
        s += 1.0 * i / (n - i + 1);
        i++;
    } while (i <= n);

    printf("O valor de S é: %f \n", s);

    return 0;
}
