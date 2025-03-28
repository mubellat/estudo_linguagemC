#include <stdio.h>

int main () {

  int numero, resultado;

  printf("Vamos calcular tabuada, escolha um número:");
  scanf("%d", &numero);

  for (int i = 1; i < 11; i++)
  {
    resultado = numero * i;
    printf("%d * %d = %d \n", numero, i, resultado);
  }
  return 0;
}