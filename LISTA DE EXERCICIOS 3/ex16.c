#include <stdio.h>

int main () {

  int num;

  printf("Digite um número:");
  scanf("%d", &num);

  if (num % 10==0 && num % 5 ==0 && num % 2 ==0)
  {
    printf("o número %d é divisível por 10, 5 e 2!", num);
  }
  else {
    printf("o número %d não é divisível por 10, 5 e nem por 2. ", num);
  }
  return 0;
}