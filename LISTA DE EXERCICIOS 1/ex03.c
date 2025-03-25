#include <stdio.h>

int main () {
    
    int num1, num2, num3, media;

    num1 = 8;
    num2 = 9;
    num3 = 7;

    printf("Vamos calcular a média aritmética de %d, %d e %d !\n", num1, num2, num3);

    media = (num1 + num2 + num3) / 3;

    printf("A média aritmética dos números %d, %d e %d é igual a %d !\n", num1, num2, num3, media);
    return 0;
}