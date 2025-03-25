#include <stdio.h>

int main () {
  int A, B;

  printf("Digite um número:");
  scanf("%d", &A);

  fflush(stdin);
  printf("Digite outro número:");
  scanf("%d", &B);

  if (A % B == 0)
  {
    printf("O valor %d é divisível por %d .",A, B);
  }
  else {
    printf("O valor %d não é divisível por %d .",A, B);
  }
      return 0;
}