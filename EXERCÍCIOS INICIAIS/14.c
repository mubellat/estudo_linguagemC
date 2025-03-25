#include <stdio.h>
#include <math.h>

int main () {

    int num, num2, potencia;

    printf("Digite um número que será a base para a potencia: ");
    scanf("%d", &num);

    printf("Digite o expoente:");
    scanf("%d", &num2);

    potencia = pow(num, num2);

    printf("A potencia de %d elevado a %d é igual a: %d", num, num2, potencia);
    
    return 0;
}