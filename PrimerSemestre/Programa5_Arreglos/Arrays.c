/* Que el usuario decida cuantas edades quiere y guardarla en un arreglo */

#include <stdio.h>

int main()
{
  int n = 0, sum = 0;
  printf("Cuantas edades quieres guardar: ");
  scanf("%d", &n);

  int edades[n];

  for (int i = 0; i < n; i++)
  {
    printf("Dame la edad %d: ", i + 1);
    scanf("%d", &edades[i]);
  }

  printf("Las edades que guardaste son: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", edades[i]);
    sum += edades[i];
  }
  printf("\nEl promedio de las edades es: %.2f\n", (float)sum / n);
  return 0;
}