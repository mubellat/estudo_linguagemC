#include <stdio.h>

int main () {
  int num1, num2, soma;

  printf("Digite um número:");
  scanf("%d", &num1);

  fflush(stdin);
  printf("Digite outro número:");
  scanf("%d", &num2);

  soma = num1 + num2;

  if (soma > 10)
  {
    printf("A soma dos inteiros é igual a: %d", soma);
  }

  return 0;
}
