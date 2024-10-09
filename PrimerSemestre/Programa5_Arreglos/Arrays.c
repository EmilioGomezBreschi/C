/* Que el usuario decida cuantas edades quiere y guardarla en un arreglo */

#include <stdio.h>

int main()
{
  int n = 0, sum = 0;
  // declaracion del arreglo
  printf("Cuantas edades quieres guardar: ");
  scanf("%d", &n);

  int edades[n];

  for (int i = 0; i < n; i++)
  {
    // lectura de edades
    printf("Dame la edad %d: ", i + 1);
    scanf("%d", &edades[i]);
  }

  // Escribir las edades que pusiste
  printf("Las edades que guardaste son: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", edades[i]);
    // la suma de cada una de las edades
    sum += edades[i];
  }
  // Promedio de las edades
  printf("\nEl promedio de las edades es: %.2f\n", (float)sum / n);
  return 0;
}