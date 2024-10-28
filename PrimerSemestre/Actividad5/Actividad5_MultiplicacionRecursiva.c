/* Multiplicacion recursiva */

#include <stdio.h>

int multiplicacion(int a, int b)
{
  if (a == 0 || b == 0)
  {
    return 0;
  }
  else if (b == 1)
  {
    return a;
  }
  else
  {
    return a + multiplicacion(a, b - 1);
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
  printf("La multiplicacion de %d y %d es %d\n", a, b, multiplicacion(a, b));
  return 0;
}