#include <stdio.h>
#include <math.h>

int main () {

  float num, raiz_quadrada, quadrado;

  printf("Digite um número : ");
  scanf("%f", &num);

  raiz_quadrada = sqrt(num);
  quadrado = pow(num, 2);

  if (num>=0)
  {
    printf("A raiz quadrada de %.1f é igual a: %.1f", num, raiz_quadrada);
  }
  else if (num<0)
  {
    printf("O quadrado de %.1f é igual a: %.1f",num, quadrado);
  }
  return 0;
}
  
  