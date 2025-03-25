#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    float num;
    int absoluto; 

    printf("Digite um número e retornará ao valor absoluto:");
    scanf("%f",&num);

    absoluto = abs(num) ;

    printf("O valor absoluto é: %d", absoluto);

    return 0;
}