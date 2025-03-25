#include <stdio.h>
#include <math.h>

int main () {

    float a1, r, n;
    int an;
    
    printf("Digite o valor de a1:");
    scanf("%f", &a1);

    fflush(stdin);
    printf("Digite o valor de r:");
    scanf("%f", &r);

    fflush(stdin);
    printf("Digite o valor de n:");
    scanf("%f", &n);

    an = a1 + ((n-1)*r);

    printf("O n-ésimo termo é: %d", an);

    return 0;
}