#include <stdio.h>

int main () {

  int i;
  i = 0;
  int contador ;
  contador = 0;
  while (contador < 100)
  {
    if (i%2==1)
    {
      contador++;
      printf("%d \n", i);
    } 
    i++;
  }
  return 0;
} 