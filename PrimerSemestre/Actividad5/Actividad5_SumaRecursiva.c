/* Suma de dos enteros con recursividad */

#include <stdio.h>

int suma(int a, int b)
{
  if (a == 0)
  {
    return b;
  }
  else if (b == 0)
  {
    return a;
  }
  else
  {
    return 1 + suma(a, b - 1);
  }
}

int main()
{
  int a, b;
  printf("Dame el primer numero entero: ");
  scanf("%d", &a);
  while (a < 0)
  {
    printf("No se pueden numeros negativos\n");
    printf("Dame el primer numero entero: ");
    scanf("%d", &a);
  }
  printf("Dame el segundo numero entero: ");
  scanf("%d", &b);
  while (b < 0)
  {
    printf("No se pueden numeros negativos\n");
    printf("Dame el segundo numero entero: ");
    scanf("%d", &b);
  }
  printf("La suma de %d y %d es %d\n", a, b, suma(a, b));
  return 0;
}