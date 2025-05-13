#include <stdio.h>

int main() {
    int voto, A = 0, B = 0, C = 0, branco = 0, nulo = 0;
    
    for(int i = 1; i <= 20; i++) {
        do {
            printf("Eleitor %d, digite seu voto. \n 1: Candidato A \n 2: Candidato B \n 3: Candidato C \n 4: Voto em branco \n 5: Nulo:", i);
            scanf("%d", &voto);
            
            if(voto < 1 || voto > 5) {
                printf("Voto inválido! Digite um número entre 1 e 5.\n");
            }
        } while(voto < 1 || voto > 5);
        
        switch(voto) {
            case 1:
                A++;
                break;
            case 2:
                B++;
                break;
            case 3:
                C++;
                break;
            case 4:
                branco++;
                break;
            case 5:
                nulo++;
                break;
        }
    }
    printf("\nRelatório de votação:\n");
    printf("Candidato A: %d votos \n", A);
    printf("Candidato B: %d votos \n", B);
    printf("Candidato C: %d votos \n", C);
    printf("Votos em branco: %d votos \n", branco);
    printf("Votos nulos: %d votos \n", nulo);
    
    if(A > B && A > C) {
        printf("Vencedor: candidato A! \n");
    } else if(B > A && B > C) {
        printf("Vencedor: candidato B! \n");
    } else if(C > A && C > B) {
        printf("Vencedor: candidato C! \n");
    } else {
        printf("EMPATE!\n");
    }
    return 0;
}
