#include <stdio.h>

int main () {

  int venda;

  printf("Informe o valor da venda:");
  scanf("%d", &venda);

  if (venda < 10)
  {
    printf("A venda teve um lucro de 30%% !");
  }
  else if (venda >= 10 && venda < 30)
  {
    printf("A venda teve um lucro de 40%% !");
  }
  else if (venda >= 30 && venda < 50)
  {
    printf("A venda teve um lucro de 50%% !");
  }
  else
  {
    printf("A venda teve um lucro de 70%% !");
  }
  return 0; 
}