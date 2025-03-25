#include <stdio.h>

int main () {

  int mes, placa, digito_final, ipva;

  printf("Digite o número correspondente ao mês que estamos(de 1 a 10):");
  scanf("%d", &mes);

  fflush(stdin);
  printf("Digite os quatros número da placa do seu veículo:");
  scanf("%d", &placa);

  digito_final = placa % 10;

  switch (digito_final)
  {
  case 1:
    ipva = 1;
    break;
  case 2:
    ipva = 2;
    break;
  case 3:
    ipva = 3;
    break;
  case 4:
    ipva = 4;
    break;
  case 5:
    ipva = 5;
    break;
  case 6:
    ipva = 6;
    break;
  case 7:
    ipva = 7;
    break;
  case 8:
    ipva = 8;
    break;
  case 9:
    ipva = 9;
    break;
  case 0:
    ipva = 10;
    break;
  default:
    printf("Você inseriu um número de mês inválido!");
    break;
  }
  if (mes == ipva)
  {
    printf("O IPVA do seu veículo vence esse mês!");
  } else {
    printf("O IPVA do seu veículo não vence esse mês!");
  }
  return 0;
}  