#include <stdio.h>

int main () {

  float peso, mercurio, venus, marte, jupiter, saturno, urano;
  int planeta;

  printf("Digite seu peso para descobrirmos como seria seu peso no planeta que escolher:");
  scanf("%f", &peso);

  printf("Escolha um planeta: \n");
  printf("Digite 1 para escolher Mercúrio: \n");
  printf("Digite 2 para escolher Vênus: \n");
  printf("Digite 3 para escolher Marte: \n");
  printf("Digite 4 para escolher Júpiter: \n");
  printf("Digite 5 para escolher Saturno: \n");
  printf("Digite 6 para escolher Urano: \n");
  scanf("%d",&planeta);

  mercurio = peso * 0.37 ; 
  venus = peso * 0.88 ;
  marte = peso * 0.38 ;
  jupiter = peso * 2.64 ;
  saturno = peso * 1.15 ;
  urano = peso * 1.17 ;

switch (planeta)
{
case 1:
  printf("Seu peso em Mercúrio seria de: %.1f", mercurio);
  break;
  case 2:
  printf("Seu peso em Vênus seria de: %.1f", venus);
  break;
  case 3:
  printf("Seu peso em Marte seria de: %.1f", marte);
  break;
  case 4:
  printf("Seu peso em Júpiter seria de: %.1f", jupiter);
  break;
  case 5:
  printf("Seu peso em Saturno seria de: %.1f", saturno);
  break;
  case 6:
  printf("Seu peso em Urano seria de: %.1f", urano);
  break;
default:
 printf("Opção inválida!");
  break;
}
  return 0;
}
