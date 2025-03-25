#include <stdio.h>

int main () {

  float imc, peso, altura;

  printf("Digite seu peso para definirmos seu imc:");
  scanf("%f", &peso);

  fflush(stdin);
  printf("Digite sua altura:");
  scanf("%f", &altura);

  imc = peso / pow(altura, 2);

  if (imc<20)
  {
    printf("Abaixo do peso!");
  }
  else if (imc>=20 && imc<=25)
  {
    printf("Peso normal!");
  }
  else if (imc>25 && imc<=30)
  {
    printf("Sobre peso!");
  }
  else if (imc>30 && imc<=40)
  {
    printf("Obesidade!");
  }
  else if (imc<40)
  {
    printf("Obesidade mórbida!");
  }
  return 0;
}