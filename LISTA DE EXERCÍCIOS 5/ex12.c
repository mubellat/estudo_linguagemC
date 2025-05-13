#include <stdio.h>

int main (){

    int numero, maior, menor;

    printf ("Digite o 1° numero: ");
    scanf ("%d", &numero);

    maior = numero;
    menor = numero;

    for (int i = 2; i <= 10; i++){
        printf ("Digite o %d° número: ",i);
        scanf ("%d", &numero);

        if (numero > maior){
            maior = numero;
        }
        else if(numero < menor){
            menor = numero;
        }
    }
    printf ("O maior número é: %d \n", maior);
    printf ("O menor número é: %d \n", menor);

    return 0;
}