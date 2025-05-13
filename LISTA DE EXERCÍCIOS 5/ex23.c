#include <stdio.h>
#include <math.h> 

int main() {
    int N;
    float S = 1; 

    printf("Informe o valor de N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        S += 1.0 / pow(i, i); 
    }
    printf("Resultado de S e: %f \n", S);

    return 0;
}
