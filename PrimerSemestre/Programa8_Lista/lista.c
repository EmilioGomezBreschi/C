#include <stdio.h>

int PedirNumero()
{
  printf("Numero: ");
  int numero;
  scanf("%d", &numero);
  return numero;
}

void mostrar(int arreglo[], int *contador)
{
  // mostrar los elementos del arreglo
  for (int i = 0; i < *contador; i++)
  {
    printf("[%d] ", arreglo[i]);
  }
  printf("\n");
}

void Numerar(int arreglo[], int *contador)
{
  // mostrar los elementos del arreglo con su indice
  for (int i = 0; i < *contador; i++)
  {
    printf("%d.- %d\n", i, arreglo[i]);
  }
}

void buscar(int arreglo[], int *contador, int numero)
{
  // buscar un numero en el arreglo
  for (int i = 0; i < *contador; i++)
  {
    if (arreglo[i] == numero)
    {
      printf("Numero encontrado en la posicion %d\n", i);
      return;
    }
  }
  printf("Numero no encontrado\n");
  return;
}

void agregar(int arreglo[], int *contador, int numero)
{
  arreglo[*contador] = numero;
  printf("Numero agregado\n");
  *contador += 1;
}

void eliminar(int arreglo[], int *contador, int indice)
{
  for (int i = indice; i < *contador; i++)
  {
    arreglo[i] = arreglo[i + 1];
  }
  *contador -= 1;
  printf("Numero eliminado\n");
  return;
}

void editar(int arreglo[], int *contador, int indice, int numero)
{
  arreglo[indice] = numero;
  printf("Numero editado\n");
  return;
}

void intercambiar(int arreglo[], int *contador, int indice1, int indice2)
{
  int temp = arreglo[indice1];
  arreglo[indice1] = arreglo[indice2];
  arreglo[indice2] = temp;
  printf("Numeros intercambiados\n");
  return;
}

void ordenar(int arreglo[], int *contador)
{
  // burbuja mejorado
  int bandera = 1;
  for (int i = 0; i < *contador && bandera; i++)
  {
    bandera = 0;
    for (int j = 0; j < *contador - 1; j++)
    {
      if (arreglo[j] > arreglo[j + 1])
      {
        int temp = arreglo[j];
        arreglo[j] = arreglo[j + 1];
        arreglo[j + 1] = temp;
        bandera = 1;
      }
    }
  }
  printf("Numeros ordenados\n");
  return;
}

void menu(int arreglo[], int *contador)
{
  int numero, indice;
  char opc;
  do
  {
    printf("----------------------\n");
    printf("Menu\n");
    printf("1.- Agregar\n");
    printf("2.- Eliminar\n");
    printf("3.- Editar\n");
    printf("4.- Ordenar\n");
    printf("5.- Buscar\n");
    printf("6.- Numerar\n");
    printf("7.- Intercambiar\n");
    printf("8.- Mostrar\n");
    printf("s.- Salir\n");
    printf("----------------------\n");
    scanf(" %c", &opc);
    switch (opc)
    {
    case 's':
      printf("Saliendo...\n");
      break;
    case '1':
      if (*contador == 20)
      {
        printf("No hay espacio\n");
        break;
      }
      printf("Agregar\n");
      numero = PedirNumero();
      agregar(arreglo, contador, numero);
      break;
    case '2':
      if (*contador == 0)
      {
        printf("No hay elementos\n");
        break;
      }
      printf("Eliminar\n");
      Numerar(arreglo, contador);
      printf("Dame el indice del numero a eliminar\n");
      do
      {
        indice = PedirNumero();
        if (indice < 0 || indice >= *contador)
        {
          printf("dame un numero entre 0 y %d \n", *contador - 1);
        }
      } while (indice < 0 || indice >= *contador);
      eliminar(arreglo, contador, indice);
      break;
    case '3':
      if (*contador == 0)
      {
        printf("No hay elementos\n");
        break;
      }
      printf("Editar\n");
      Numerar(arreglo, contador);
      do
      {
        printf("Dame el indice del numero a editar\n");
        indice = PedirNumero();
        if (indice < 0 || indice >= *contador)
        {
          printf("dame un numero entre 0 y %d \n", *contador - 1);
        }
      } while (indice < 0 || indice >= *contador);
      printf("Dame el nuevo numero\n");
      numero = PedirNumero();
      editar(arreglo, contador, indice, numero);
      break;
    case '4':
      if (*contador == 0)
      {
        printf("No hay elementos\n");
        break;
      }
      printf("Ordenar\n");
      printf("Arreglo inicial\n");
      mostrar(arreglo, contador);
      // ordenar el arreglo
      ordenar(arreglo, contador);
      mostrar(arreglo, contador);
      break;
    case '5':
      if (*contador == 0)
      {
        printf("No hay elementos\n");
        break;
      }
      printf("Buscar\n");
      numero = PedirNumero();
      buscar(arreglo, contador, numero);
      break;
    case '6':
      if (*contador == 0)
      {
        printf("No hay elementos\n");
        break;
      }
      printf("Numerar\n");
      Numerar(arreglo, contador);
      break;
    case '7':
      if (*contador < 2)
      {
        printf("No hay suficientes elementos\n");
        break;
      }
      printf("Intercambiar\n");
      Numerar(arreglo, contador);
      printf("Dame el indice del primer numero\n");
      do
      {
        indice = PedirNumero();
        if (indice < 0 || indice >= *contador)
        {
          printf("dame un numero entre 0 y %d \n", *contador - 1);
        }
      } while (indice < 0 || indice >= *contador);
      int indice2;
      printf("Dame el indice del segundo numero\n");
      do
      {
        indice2 = PedirNumero();
        if (indice2 < 0 || indice2 >= *contador)
        {
          printf("dame un numero entre 0 y %d \n", *contador - 1);
        }
      } while (indice2 < 0 || indice2 >= *contador);
      intercambiar(arreglo, contador, indice, indice2);
      break;
    case '8':
      if (*contador == 0)
      {
        printf("No hay elementos\n");
        break;
      }
      printf("Mostrar\n");
      mostrar(arreglo, contador);
      break;
    default:
      printf("Opcion no valida\n");
      break;
    }
  } while (opc != 's');
}

int main()
{
  int edades[20];
  int i = 0;
  menu(edades, &i);
  return 0;
}