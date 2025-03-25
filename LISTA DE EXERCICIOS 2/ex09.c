#include <stdio.h>
#include <math.h>

int main () {

    int an;
    float a1, r, n;

    printf("Digite o valor de a1:");
    scanf("%f", &a1);

    fflush(stdin);
    printf("Digite o valor de r:");
    scanf("%f", &r);

    fflush(stdin);
    printf("Digite o valor de n:");
    scanf("%f", &n);

    an = a1 * pow(r, (n - 1));

    printf("O resultado do n-ésimo termo é: %d", an);

    return 0;
}