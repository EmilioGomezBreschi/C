#include <stdio.h>

int main()
{
  int *apuntador = NULL;
  int **apuntador2 = NULL;
  int ***apuntador3 = NULL;
  int x = 0;

  apuntador2 = &apuntador;
  printf("El valor de apuntador es: %p\n", apuntador);
  printf("La direccion del apuntador es: %p\n", &apuntador);
  apuntador = &x;
  printf("El valor de apuntador despues de asignar la direccion de x es: %p\n", apuntador);
  printf("El valor de la variable x es: %p\n", &x);
  printf("El valor de la variable x desde apuntador 1 es: %d\n", *apuntador);
  printf("El valor de la variable x desde apuntador 2 es: %d\n", **apuntador2);
  printf("El valor de la variable x desde apuntador 3 es: %p\n", ***apuntador3);
  *apuntador = 20;
  printf("El valor de x es: %d\n", x);
  return 0;
}