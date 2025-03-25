#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Podem forma um triângulo Equilátero! \n");
        } 
        else if (a == b || b == c || a == c) {
            printf("Podem forma um triângulo Isósceles! \n");
        } 
        else {
            printf("Podem forma um triângulo Escaleno! \n");
        }
    } else {
        printf("Os valores não podem formar um triângulo.\n");
    }

    return 0;
}
