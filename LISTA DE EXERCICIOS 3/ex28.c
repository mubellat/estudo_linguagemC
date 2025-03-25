#include <stdio.h>

int main () {

  int a, b, c;

  printf("Digite o valor de A:");
  scanf("%d", &a);

  fflush(stdin);
  printf("Digite o valor de B:");
  scanf("%d", &b);

  fflush(stdin);
  printf("Digite o valor de C:");
  scanf("%d", &c);

  if (a + b > c && a + c > b && b + c > a) 
  {
    printf("Os valores podem formar um triângulo. \n");
} 
else {
    printf("Os valores não podem formar um triângulo.");
}
  return 0;
}