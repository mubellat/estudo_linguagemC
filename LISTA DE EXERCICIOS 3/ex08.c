#include <stdio.h>

int main () {

  int num;

  printf("Digite um número:");
  scanf("%d", &num);

  if (num % 5 == 0)
  {
    printf("O número %d é um divisível por 5.", num);
  }
  else {
    printf("O número %d não é um divisível por 5.", num);
  }
  return 0;
}