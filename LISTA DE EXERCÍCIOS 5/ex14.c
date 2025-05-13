#include <stdio.h>

int main (){
    int num;
    int par = 0, impar = 0;

    printf ("Digite 10 números interios: \n");
    for (int i = 1; i <= 10; i++){
        printf ("Digite o %d numero: ", i);
        scanf ("%d", &num);

        if (num % 2 == 0) {
            par++;  
        } else {
            impar++; 
        }
    printf("\nQuantidade de números pares: %d\n", par);
    printf("Quantidade de números ímpares: %d\n", impar);
    }

    return 0;
}