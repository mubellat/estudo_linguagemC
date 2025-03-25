#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C;

    printf("Digite o valor do lado A: ");
    scanf("%f", &A);
    
    printf("Digite o valor do lado B: ");
    scanf("%f", &B);
    
    printf("Digite o valor do lado C: ");
    scanf("%f", &C);

    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        
        if (pow(A, 2) + pow(B, 2) == pow(C, 2) ||
            pow(A, 2) + pow(C, 2) == pow(B, 2) ||
            pow(B, 2) + pow(C, 2) == pow(A, 2)) {
            
            float angA, angB, angC;

            angA = acos((pow(B, 2) + pow(C, 2) - pow(A, 2)) / (2 * B * C)) * (180.0 / M_PI);
            angB = acos((pow(A, 2) + pow(C, 2) - pow(B, 2)) / (2 * A * C)) * (180.0 / M_PI);
            angC = 90.0; 

            printf("O triângulo é retângulo!\n");
            printf("Angulo A: %.2f°\n", angA);
            printf("Angulo B: %.2f°\n", angB);
            printf("Angulo C: %.2f°\n", angC);
        } else {
            printf("Os valores informados formam um triângulo, retângulo.\n");
        }
    } else {
        printf("Os valores informados nao formam um triângulo.\n");
    }

    return 0;
}
