#include <stdio.h>

int main () {

    float num1, num2, num3, num4, media, media2;

    printf("Vamos calcular a média aritmética de 4 número que você escolher.\n");

    printf("Digite o primeiro número:\n");
    scanf("%f", &num1);

    fflush(stdin);
    printf("Digite o segundo número:\n");
    scanf("%f", &num2);

    fflush(stdin);
    printf("Digite o terceiro número:\n");
    scanf("%f", &num3);

    fflush(stdin);
    printf("Digite o quarto número:\n"); 
    scanf("%f", &num4);
    
    printf("Vamos calcular a média aritmética de %.1f, %.1f, %.1f e %.1f !\n", num1, num2, num3, num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A média aritmética dos números %.1f, %.1f, %.1f e %.1f é igual a %.2f !\n", num1, num2, num3, num4, media);

    media2 = ((num1 * 0.1) + (num2 * 0.2) +(num3 * 0.3) + (num4 * 0.4)) / 1;
    
    printf("A média ponderada é igual a: %.2f", media2);

    return 0;
}