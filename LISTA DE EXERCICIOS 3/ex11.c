#include <stdio.h>

int main () {

  int num;

  printf("Digite um número:");
  scanf("%d", &num);

  if (num % 3==0 && num % 7 ==0)
  {
    printf("o número %d é divisível tanto por 3 quanto por 7!",num);
  }
  else {
    printf("o número %d não é divisível por 3 e 7. ", num);
  }
  return 0;
}