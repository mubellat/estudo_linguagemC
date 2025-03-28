#include <stdio.h>

int main () {
  for (int i = 50; i < 301; i++)
  {
    if (i % 2==1)
    {
      printf("%d \n", i);
    }
  }
  return 0;
}