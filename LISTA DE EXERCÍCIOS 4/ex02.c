#include <stdio.h>

int main () {

  int i = 0;
  while (i < 1000)
  {
    printf("%d \n", ++i); /* o "i" antes do ++ adiciona mais um antes e o "i" depois adiciona mais um após, por exemplo: poderia usar i++ porém teria que colocar a condição "i <=1000"*/ 
  }
  return 0;
}