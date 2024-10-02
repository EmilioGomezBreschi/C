/*Fibonacci con estructuras de control*/

#include <stdio.h>

int main()
{
  int n, j;
  printf("Hasta que numero quieres contar:\n");
  scanf("%d", &n);
  printf("----------------------------------------\n");
  printf("Ciclo con FOR\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", i + 1);
  }
  printf("----------------------------------------\n");
  printf("Conteo con WHILE\n");
  while (j < n)
  {
    printf("%d\n", j + 1);
    j++;
  }
  printf("----------------------------------------\n");
  printf("Conteo con DO-WHILE\n");
  j = 0;
  do
  {
    printf("%d\n", j + 1);
    j++;
  } while (j < n);
  return 0;
}