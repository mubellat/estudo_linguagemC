#include <stdio.h>
float main()
{
    float inteiro1, inteiro2, soma;
    printf("Entre com o primeiro inteiro\n");
    scanf("%f", &inteiro1);
    
    printf("Entre com o segundo inteiro\n");
    scanf("%f", &inteiro2);
    
    soma = inteiro1 + inteiro2;
    printf("A soma é %f", soma);
    return 0;
    // %f para FLOAT
    // %D para INT
    // %lf para DOUBLE
    // %C para CHAR
    // %s para STRING
}