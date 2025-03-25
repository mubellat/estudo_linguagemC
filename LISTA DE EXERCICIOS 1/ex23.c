#include <stdio.h>

int main () {

    float quant_lt, dist;
    int veloc, temp;

    printf("Qual foi o tempo gasto na sua viagem em horas?");
    scanf("%d", &temp);

    fflush(stdin);
    printf("Qual a velocidade média da sua viagem?");
    scanf("%d", &veloc);

    dist = temp * veloc;
    quant_lt = dist / 12;

    printf("Velocidade média da viagem: %d \n", veloc);
    printf("Tempo gasto na viagem: %d \n", temp);
    printf("Distância percorrida da sua viagem: %.1f \n", dist);
    printf("Quantidade de litros gasto na sua viagem: %.1f \n", quant_lt);

    return 0;
}