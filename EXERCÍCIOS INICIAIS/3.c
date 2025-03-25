#include <stdio.h>
int main(){
    int inteiro1, inteiro2, soma; //linha de declaração de variável
    printf("Entre com o primeiro inteiro\n");
    scanf("%d", &inteiro1);
    printf("Entre com o segundo inteiro\n");
    scanf("%d", &inteiro2);
    soma = inteiro1 + inteiro2;
    printf("A soma é %d", soma);
    return 0;
}
// COMANDO PRINTAR NÚMERO: print("%d",5)

/*  \n: pula uma linha
    \t: espaço entre caracteres
    \\: exibir a contrabarra
    \": exibir aspas duplas
*/