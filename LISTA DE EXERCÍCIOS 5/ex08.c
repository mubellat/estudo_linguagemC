#include <stdio.h>

int main () {
  
  for (int i = 1; i <= 10; i++)
  {
    int numero;
    float dobro;
    printf("Insina o %d° numero: ",i);
    scanf("%d", &numero);
    
    dobro = numero/2;
    printf("A metada desse número é : %.1f \n", dobro);
  }
  return 0;
}