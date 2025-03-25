#include <stdio.h>

int main () {

  int num1, num2, soma, resultado;

  printf("Digite um número:");
  scanf("%d", &num1);

  fflush(stdin);
  printf("Digite outro número:");
  scanf("%d", &num2);

  soma = num1 + num2;

  if (soma>20)
  {
    resultado = soma + 8;
    printf("O valor da soma é igual a: %d (Valor original: %d)", resultado, soma);
  }
  else if (soma<20)
  {
    resultado = soma - 5;
    printf("O valor da soma é igual a: %d (Valor original: %d)", resultado, soma);
  }
  return 0;
}