#include <stdio.h>

int main () {
  int num, maior, menor;

  printf("Digite o 1° número: ");
  scanf("%d", &num);

  maior = menor = num;

  for (int i = 2; i < 11; i++)
  {
    printf("Digite o %d° número: ", i);
    scanf("%d", &num);

    if (num > maior) {
      maior = num;
    }
    if (num < menor) {
      menor = num;
    }
  }
  printf("Maior número: %d \n", maior);
  printf("Menor número: %d", menor);
    return 0;
}