#include <stdio.h>

int main () {

  int num;

  printf("Digite um número:");
  scanf("%d", &num);

  if (num>0) 
  {
    printf("O número %d é positivo.", num);
  }
  else if (num<0)
  {
    printf("O número %d é negativo.", num);
  }
  else if (num==0)
  {
    printf("O número %d é nulo.", num);
  }

  return 0;
}