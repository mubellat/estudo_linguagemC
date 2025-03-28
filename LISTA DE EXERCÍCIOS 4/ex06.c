#include <stdio.h>

int main () {
  for (int i = 1000; i < 2001; i++)
  {
    if (i % 11==2)
    {
      printf("%d \n", i);
    }
  }
  return 0;
}