#include <stdio.h>
#include <math.h>

int main () {

    float a, b , c;
    int x1, x2;

    printf("Digite o valor de a:");
    scanf("%f", &a);

    fflush(stdin);
    printf("Digite o valor de b:");
    scanf("%f", &b);

    fflush(stdin);
    printf("Digite o valor de c:");
    scanf("%f", &c);

    x1 = - (b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a); 
    x2 = - (b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a); 

    printf("O resultado de x1 é: %d \n", x1);
    printf("O resultado de x2 é: %d", x2);

    return 0;
}