#include <stdio.h>

int main () {

  int num;

  printf("Digite um número:");
  scanf("%d", &num);

  if (num % 3 == 0)
  {
    printf("O número %d é um múltiplo de 3.", num);
  }
  else {
    printf("O número %d não é um múltiplo de 3.", num);
  }
  return 0;
}