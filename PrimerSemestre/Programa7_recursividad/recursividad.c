#include <stdio.h>

int factorial(int num)
{
  if (num == 0)
  {
    return 1;
  }
  else
  {
    printf("Calculando factorial de %d\n", num);
    return num * factorial(num - 1);
  }
}

int main()
{
  printf("Dame un numero a factorizar: ");
  int n;
  scanf("%d", &n);
  while (n < 0)
  {
    printf("No se pueden numeros negativos\n");
    printf("Dame un numero a factorizar: ");
    scanf("%d", &n);
  }
  printf("El factorial de %d es %d\n", n, factorial(n));
  return 0;
}