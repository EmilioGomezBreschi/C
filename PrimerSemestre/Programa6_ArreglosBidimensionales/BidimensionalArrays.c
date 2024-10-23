#include <stdio.h>

int main()
{
  int columnas, filas;
  printf("Dame el numero de estudiantes: ");
  scanf("%d", &columnas);
  printf("Dame el numero de centros universitarios: ");
  scanf("%d", &filas);

  int matriz[filas][columnas];

  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      printf("Del centro %d dame la edad del estudiante %d: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  int mayor = matriz[0][0];
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      if (matriz[i][j] > mayor)
      {
        mayor = matriz[i][j];
      }
    }
  }

  printf("El numero mas alto es: %d\n", mayor);

  int count = 0;
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      if (matriz[i][j] == mayor)
      {
        count++;
      }
    }
  }

  printf("El numero mas alto se repite %d veces\n", count);

  return 0;
}