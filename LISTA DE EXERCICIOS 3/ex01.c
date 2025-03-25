#include <stdio.h>

int main () {
  int num;

  printf("Digite um número:");
  scanf("%d", &num);


  if (num > 20) 
  {
    printf("Número digitado: %d", num);
  }

  return 0;
}