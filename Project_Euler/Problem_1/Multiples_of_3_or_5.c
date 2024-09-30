#include <stdio.h>

int main()
{
  int suma;
  for (int i = 0; i < 1000; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      suma += i;
    }
    else if (i % 3 == 0)
    {
      suma += i;
    }
    else if (i % 5 == 0)
    {
      suma += i;
    }
  }
  printf("%i", suma);
  return 0;
}