/*Escribe una función en C llamada incrementarPorCopia que tome un entero como argumento, lo incremente en 5 unidades y luego imprima el resultado dentro de la función. Luego, en la función main(), declara una variable entera, llama a la función incrementarPorCopia() pasando la variable como argumento y muestra el valor original y el valor modificado después de llamar a la función.*/

#include <stdio.h>

void incrementarPorCopia(int a)
{
  a += 5;
  printf("El valor dentro de la funcion es: %d\n", a);
}

int main()
{
  int a = 10;
  printf("El valor original es: %d\n", a);
  incrementarPorCopia(a);
  printf("El valor despues de la funcion es: %d\n", a);
  return 0;
}