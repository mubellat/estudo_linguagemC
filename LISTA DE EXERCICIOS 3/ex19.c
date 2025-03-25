#include <stdio.h>
#include <math.h>

int main () {

  int num1, num2;
  float raiz1, raiz2, qd1, qd2;

  printf("Digite um número:");
  scanf("%d", &num1);

  fflush(stdin);
  printf("Digite outro número:");
  scanf("%d", &num2);

  if (num1 > num2)
  {
    raiz1 = sqrt(num1);
    qd1 = pow(num2, 2);
    printf("Raiz quadrada de %d: %.1f \n ", num1, raiz1);
    printf("O quadrado de %d: %.1f \n ", num2, qd1);
  } 
  else
  {
    raiz2 = sqrt(num2);
    qd2 = pow(num1, 2);
    printf("Raiz quadrada de %d: %.1f \n ", num2, raiz2);
    printf("O quadrado de %d: %.1f \n ", num1, qd2);
  }
  return 0;
}