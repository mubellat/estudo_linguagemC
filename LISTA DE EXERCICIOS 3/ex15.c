#include <stdio.h>

int main() {

    int A, B, C;

    printf("Digite o valor de A:");
    scanf("%d", &A);

    fflush(stdin);
    printf("Digite o valor de B:");
    scanf("%d", &B);

    fflush(stdin);
    printf("Digite o valor de C:");
    scanf("%d", &C);

    if (A >= B && A >= C) {
        if (B >= C) {
            printf("%d %d %d \n", A, B, C);
        } else {
            printf("%d %d %d \n", A, C, B);
        }
    } else if (B >= A && B >= C) {
        if (A >= C) {
            printf("%d %d %d \n", B, A, C);
        } else {
            printf("%d %d %d \n", B, C, A);
        }
    } else {
        if (A >= B) {
            printf("%d %d %d \n", C, A, B);
        } else {
            printf("%d %d %d \n", C, B, A);
        }
    }
    return 0;
}
