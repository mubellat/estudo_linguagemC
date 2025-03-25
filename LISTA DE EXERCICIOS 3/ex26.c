#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a primeira nota bimestral: ");
    scanf("%f", &n1);

    fflush(stdin);
    printf("Digite a segunda nota bimestral: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7) {
        printf("APROVADO!\n");
    } else if (media < 3) 
    {
        printf("REPROVADO!\n");
    } else 
    {
        printf("RECUPERAÇÃO!\n");
    }

    return 0;
}
