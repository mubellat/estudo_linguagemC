#include <stdio.h>

int main() {
    int N, i;
    float H = 0.0;

    printf("Digite o valor de N (inteiro positivo): ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            H -= 1.0 / i;  
        } else {
            H += 1.0 / i; 
        }
    }
    printf("O valor de H é: %f \n", H);

    return 0;
}
