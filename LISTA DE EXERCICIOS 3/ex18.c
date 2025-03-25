#include <stdio.h>
int main() {
  
  int num;

  printf("Informe um número:");
  scanf("%d", &num);

  if (num==5)
  {
    printf("O número é igual a 5 ! ");
  }
  else if (num==200)
  {
    printf("O número é igual a 200 ! ");
  }
  else if (num==400)
  {
    printf("O número é igual a 400 ! ");
  }
  else if (num>=500 && num<=1000)
  {
    printf("O número %d está dentro do intervalo entre 500 e 1000!", num);
  }
  else {
    printf("Esse número está fora dos escopos!");
  }
  return 0;
}