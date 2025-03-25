#include <stdio.h>

int main() {
  
  int idade;

  printf("Informe qual a sua idade:");
  scanf("%d", &idade);

  if (idade<16)
  {
    printf("Você é não é um eleitor!");
  }
  else if (idade>=18 && idade<65)
  {
    printf("Você é um eleitor obrigatório!");
  }
  else if (idade>=16 && idade<18 || idade>65)
  {
    printf("Você é um eleitor facultativo!");
  }
  
  return 0;
}