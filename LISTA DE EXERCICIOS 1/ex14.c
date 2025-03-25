#include <stdio.h>

int main(){
    
    int num, cent, dez, uni, inv ;

    printf("Insira um número que contenha centena, dezena e unidade: ");
    scanf("%d", &num);

    cent = num / 100;
    dez = ( num % 100 ) / 10;
    uni = ( num % 10 ) / 1;

    inv = (uni * 100) + (dez * 10) + (cent * 1);

    printf("O inverso do número %d é: %d", num, inv);

    return 0;
}