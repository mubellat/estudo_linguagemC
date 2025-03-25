#include <stdio.h>

int main () {

  float x, fx;

  printf("Informe o valor de X:");
  scanf("%f", &x);

  fx = 8 / (2 - x);

  printf("O valor de f(x) é igual a: %.1f", x);
}