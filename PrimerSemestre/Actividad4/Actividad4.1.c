/*Escribe una función en C llamada incrementarPorCopia que tome un entero como argumento, lo incremente en 5 unidades y luego imprima el resultado dentro de la función. Luego, en la función main(), declara una variable entera, llama a la función incrementarPorCopia() pasando la variable como argumento y muestra el valor original y el valor modificado después de llamar a la función.*/

#include <stdio.h>


// Funcion que incrementa el valor de una variable por copia
void incrementarPorCopia(int a)
{
  // Incrementa el valor de la variable
  a += 5;
  // Imprime el valor de la variable
  printf("El valor dentro de la funcion es: %d\n", a);
}

int main()
{
  // Declaracion de la variable
  int a = 10;
  // Imprime el valor original de la variable
  printf("El valor original es: %d\n", a);
  // Llama a la funcion incrementarPorCopia
  incrementarPorCopia(a);
  // Imprime el valor de la variable despues de la funcion
  printf("El valor despues de la funcion es: %d\n", a);
  return 0;
}