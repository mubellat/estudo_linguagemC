#include <stdio.h>

int main() {
  int num1, num2;

  printf("Digite um número:");
  scanf("%d", &num1);

  fflush(stdin);
  printf("Digite outro número:");
  scanf("%d", &num2);

  if (num1>num2)
  {
    printf("O número %d é maior que %d .", num1, num2);
  }
  else {
    printf("O número %d é menor que %d .", num1, num2);
  }
  return 0;
}