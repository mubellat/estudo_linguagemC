#include <stdio.h>

int main () {

    float prod, desc;

    printf("Informe o valor do produto:");
    scanf("%f", &prod);

    desc = prod - (prod * 0.09);

    printf("O valor do produto com desconto de 9%% ficou %.2f !", desc);
    
    return 0;
}