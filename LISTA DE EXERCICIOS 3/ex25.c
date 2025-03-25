#include <stdio.h>

int main () {

  int idade;

  printf("Informe sua idade para descobrir o valor do plano de saúde que você irá pagar:");
  scanf("%d", &idade);

  if (idade <= 10)
  {
    printf("O valor que você irá pagar será de R$ 30,00 !");
  }
  else if (idade > 10 && idade <= 29)
  {
    printf("O valor que você irá pagar será de R$ 60,00 !");
  }
  else if (idade > 29 && idade <= 45)
  {
    printf("O valor que você irá pagar será de R$ 120,00 !");
  }
  else if (idade > 45 && idade <= 59)
  {
    printf("O valor que você irá pagar será de R$ 150,00 !");
  }
  else if (idade > 59 && idade <= 65)
  {
    printf("O valor que você irá pagar será de R$ 250,00 !");
  }
  else{
    printf("O valor que você irá pagar será de R$ 400,00 !");
  }
  return 0;
}