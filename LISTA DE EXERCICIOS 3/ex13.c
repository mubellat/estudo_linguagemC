#include <stdio.h>

int main () {
  int A, B, C;

  printf("Digite o valor de A:");
  scanf("%d", &A);

  fflush(stdin);
  printf("Digite o valor de B:");
  scanf("%d", &B);

  fflush(stdin);
  printf("Digite o valor de C:");
  scanf("%d", &C);

  if (A > B && A > C)
  {
    printf("O maior valor dos três número é: %d !", A);
  }
  else if (B > A && B > C)
  {
    printf("O maior valor dos três número é: %d !", B);
  }
  else {
    printf("O maior valor dos três número é: %d !", C);
  }
  
  return 0;
}