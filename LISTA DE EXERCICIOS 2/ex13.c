#include <stdio.h>
#include <math.h>

int main () {

    double c1, tl, a, b, c, d;
    
    printf("Digite o valor de a:");
    scanf("%lf", &a);

    fflush(stdin);
    printf("Digite o valor de b:");
    scanf("%lf", &b);

    fflush(stdin);
    printf("Digite o valor de c:");
    scanf("%lf", &c);

    c1 = c * (M_PI/180);

    d = pow(a, 2) + pow(b, 2) - (2 * a * b * cos(c1));
    tl = sqrt(d);

    printf("O terceiro lado vale: %.2lf", tl);
    return 0;
}