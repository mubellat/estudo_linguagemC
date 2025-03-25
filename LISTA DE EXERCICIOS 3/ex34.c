#include <stdio.h>

int main() {
    
    int idade;

    float peso, dose_mg, quant_ml, dose_gota;

    printf("Digite a idade do paciente: ");
    scanf("%d", &idade);
    
    printf("Digite o peso do paciente (em kg): ");
    scanf("%f", &peso);

    if (idade >= 12) {
        if (peso >= 60) {
            dose_mg = 1000;  
        } else {
            dose_mg = 875;   
        }
    } else {
       
        if (peso >= 5 && peso <= 9) {
            dose_mg = 125;
        } else if (peso >= 9.1 && peso <= 16) {
            dose_mg = 250;
        } else if (peso >= 16.1 && peso <= 24) {
            dose_mg = 375;
        } else if (peso >= 24.1 && peso <= 30) {
            dose_mg = 500;
        } else if (peso > 30) {
            dose_mg = 750;
        }
    }

    quant_ml = dose_mg / 500.0; 

    dose_gota = quant_ml * 20;

    printf("Dosagem: %.0f mg\n", dose_mg);
    printf("Quantidade em ml: %.1f \n", quant_ml);
    printf("Quantidade de gotas por dose: %.0f \n", dose_gota);

    return 0;
}
