/* Fibonacci Recursivo */

#include <stdio.h>

int fibonacci(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main()
{
  int n;
  printf("Dame un numero entero: ");
  scanf("%d", &n);
  while (n < 0)
  {
    printf("No se pueden numeros negativos\n");
    printf("Dame un numero entero: ");
    scanf("%d", &n);
  }
  printf("El fibonacci de %d es %d\n", n, fibonacci(n));
  return 0;
}