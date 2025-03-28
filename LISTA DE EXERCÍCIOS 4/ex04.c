#include <stdio.h>

int main () {

  int resultado;
  for (int i = 1; i < 11; i++)
  {
    printf("\nTabuada do %d \n", i);
    for (int j = 0; j < 11; j++)
    {
      resultado = i * j;
      printf("%d * %d = %d \n", i, j, resultado);
    }
  }
  return 0;
}