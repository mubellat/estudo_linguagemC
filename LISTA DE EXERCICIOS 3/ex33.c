#include <stdio.h>
#include <math.h>

int main () {

  float x, fx;

  printf("Informe o valor de X:");
  scanf("%f", &x);

  fx = 5 * x + 3 / sqrt(pow(x, 2)- 16);

  printf("O valor de f(x) é igual a: %.1f", fx);
}