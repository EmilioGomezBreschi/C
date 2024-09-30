#include <stdio.h>

int main()
{
  int j = 0;
  int i = 1;
  int suma = 0;
  for (int a; a < 4000000; a = i + j)
  {
    a = i + j;
    i = j;
    j = a;

    if (a%2 == 0)
    {
      suma += a;
    }
  }
  printf("%d", suma);
}