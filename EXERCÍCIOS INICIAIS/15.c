#include <stdio.h>

int main () {

  int escolha;

  printf("Escolha um número: \n 1 - sorvete  \n 2 - pão de queijo \n 3 - maconha \n 4 - disco  \n 5 - salgado \n informe sua escolha:");
  scanf("%d", &escolha);

  switch (escolha)
  {
  case 1:
    printf("Sorvete escolhido");
    break;  
    
    case 2:
    printf("pao de queijo escolhido");
    break; 

    case 3:
    printf("maconha escolhido");
    break; 

    case 4:
    printf("disco escolhido");
    break; 

    case 5:
    printf("salgado escolhido");
    break; 
  
  default:
  printf("invalido");
    break;
  }
  return 0;
}