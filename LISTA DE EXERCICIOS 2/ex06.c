#include <stdio.h>
#include <math.h>

int main () {

    float x1, y1, x2, y2, d;

    printf("Digite x1:");
    scanf("%f" ,&x1);

    fflush(stdin);
    printf("Digite x2:");
    scanf("%f" ,&x2);

    fflush(stdin);
    printf("Digite y1:");
    scanf("%f" ,&y1);

    fflush(stdin);
    printf("Digite y2:");
    scanf("%f" ,&y2);

    d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    printf("A distância entre os dois pontos é: %.2f", d);
    return 0;
}
