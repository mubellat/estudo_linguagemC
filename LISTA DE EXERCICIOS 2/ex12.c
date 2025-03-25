#include <stdio.h>
#include <math.h>

int main () {

    double num, x;

    printf("Digite o valor do ângulo:");
    scanf("%lf", &num);

    x = num * (M_PI/180);

    printf("O tangente é %.1lf", tan(x));

    return 0;
}