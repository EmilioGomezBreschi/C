/* Escribe una función en C llamada incrementarPorReferencia que tome un puntero a un entero como argumento, incremente el valor al que apunta en 5 unidades y luego imprima el resultado dentro de la función. En la función main(), declara una variable entera, llama a la función incrementarPorReferencia() pasando un puntero a la variable como argumento y muestra el valor original y el valor modificado después de llamar a la función.*/

#include <stdio.h>

void incrementarPorReferencia(int *a)
{
  *a += 5;
  printf("El valor dentro de la funcion es: %d\n", *a);
}

int main()
{
  int a = 10;
  printf("El valor original es: %d\n", a);
  incrementarPorReferencia(&a);
  printf("El valor despues de la funcion es: %d\n", a);
  return 0;
}