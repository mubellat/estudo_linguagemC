#include <stdio.h>

int main () {
  int destino, volta;

  printf("Informe seu destino. \n ");
  printf("Digite 1 para destino região norte. \n ");
  printf("Digite 2 para destino região nordeste. \n");
  printf("Digite 3 para destino região centro-oeste. \n");
  printf("Digite 4 para destino região sul. \n");
  scanf("%d", &destino);

  printf("Se sua viagem for só de ida digite 1. \n");
  printf("Se sua viagem for de ida e volta digite 2. \n");
  scanf("%d" ,&volta);

  if (volta == 1)
  {
  switch (destino)
  {
  case 1:
    printf("Sua passagem custa R$ 500,00 !");
    break;
  case 2:
    printf("Sua passagem custa R$ 350,00 !");
    break;
  case 3:
    printf("Sua passagem custa R$ 350,00 !");
    break;
  case 4:
    printf("Sua passagem custa R$ 300,00 !");
    break;
  default:
  printf("Opção inválida!");
    break;
  } 
}else if (volta == 2){
  switch (destino)
  {
  case 1:
    printf("Sua passagem custa R$ 900,00 !");
    break;
  case 2:
    printf("Sua passagem custa R$ 650,00 !");
    break;
  case 3:
    printf("Sua passagem custa R$ 600,00 !");
    break;
  case 4:
    printf("Sua passagem custa R$ 550,00 !");
    break;
  default:
  printf("Opção inválida!");
    break;
}
}
return 0;
}