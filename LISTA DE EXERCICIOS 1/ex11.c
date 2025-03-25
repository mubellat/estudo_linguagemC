#include <stdio.h>

int main () {

    int num1, num2, resto;
    float quoc; 

    printf("Digite um número: ");
    scanf("%d", &num1);

    fflush(stdin);
    printf("Quantidade que você quer dividir: ");
    scanf("%d", &num2);

    printf("O seu dividendo é: %d ! \n",num1);
    printf("O seu dividor é: %d ! \n",num2);
    
    resto = num1 / num2;
    quoc = num1 % num2;

    printf("O seu quociente é: %d ! ", quoc);
    printf("O resto da divisão é: %2.f ! \n",resto);

    return 0;
}