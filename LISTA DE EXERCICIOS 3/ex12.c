#include <stdio.h>

int main () {

  float salario, prestacao, prestacao2;

  printf("Digite o valor do salário bruto:");
  scanf("%f", &salario);

  fflush(stdin);
  printf("Digite o valor da prestação:");
  scanf("%f", &prestacao);

  prestacao2 = salario * 0.3;

  if (prestacao2 < prestacao)
  {
    printf("O crédito não foi aprovado.");
  }
  else{
    printf("O crédito foi aprovado.");
  }
  return 0;
}