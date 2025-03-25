#include <stdio.h>
#include <math.h>

int main () {
  int x, fx;

  printf("Informe o valor de X:");
  scanf("%d", &x);

  if (x <= 1)
  {
   fx = 1; 
  } else if (x>1 && x<=2)
  {
    fx = 2;
  }else if (x > 2 && x <= 3)
  {
    fx = pow(x ,2);
  } else {
    fx = pow (x ,3);
  }
  
  printf("F(x): %d", fx);
  return 0;
}