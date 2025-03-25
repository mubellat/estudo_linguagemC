#include <stdio.h>

int main() {
  
  int idade;

  printf("Informe qual a sua idade:");
  scanf("%d", &idade);

  if (idade<18)
  {
    printf("Você é uma pessoa menor de idade!");
  }
  else if (idade>=18 && idade<65)
  {
    printf("Você é uma pessoa maior de idade!");
  }
  else{
    printf("Você é uma pessoa idosa!");
  }
  return 0;
}