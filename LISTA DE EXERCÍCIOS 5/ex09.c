#include <stdio.h>

int main (){

    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        printf ("%d \n", i);
        soma +=i;
    }
    printf ("TOTAL: %d\n", soma);

    return 0;
}