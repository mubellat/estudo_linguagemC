#include <stdio.h>

int main (){
    int soma = 0;

    for (int i = 1; i <= 100; i++){
        printf ("%d\n", i);
        soma += i;
    }
    float media = soma/100;
    printf ("A media de todos os numeros de 1 a 100 e: %.1f\n", media);

    return 0;
}