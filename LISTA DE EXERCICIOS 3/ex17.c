#include <stdio.h>

int main () {
  int num;

  printf("Digite um número:");
  scanf("%d", &num);

  if (num > 20 && num < 90)
  {
    printf("O número %d está na faixa de valores entre 20 e 90!", num);
  }
  else {
    printf("O número %d não está na faixa de valores entre 20 e 90!", num);
  }

  return 0;
}
  