#include <stdio.h>

int main() {

  float frequencia, nota;

  printf("Digite sua frequência em porcentagem:");
  scanf("%f", &frequencia);

  fflush(stdin);
  printf("Digite sua nota:");
  scanf("%f", &nota);

  if (frequencia < 75)
  {
    printf("REPROVADO!");
  }
  else if (frequencia >= 75 && frequencia <=100 && nota < 3)
  {
    printf("REPROVADO!");
  }
  else if(frequencia >= 75 && frequencia <=100 && nota >= 3 && nota < 7){
    printf("RECUPERAÇÃO");
  }
  else if (frequencia >= 75 && frequencia <=100 && nota >= 7 && nota <= 10)
  {
    printf("APROVADO!");
  }
  return 0;
}