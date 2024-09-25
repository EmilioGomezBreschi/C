#include <stdio.h>

float suma(float num1, float num2)
{
  return num1 + num2;
}

float resta(float num1, float num2)
{
  return num1 - num2;
}

float multiplicacion(float num1, float num2)
{
  return num1 * num2;
}

float division(float num1, float num2)
{
  return num1 / num2;
}

int main()
{

  int opc;
  float a, b, c;
  do
  {
    printf("-------------------------------------------------------------\n");
    printf("Elige la opcion deseada\n1-sumar\n2-restar\n3-multiplicar\n4-dividir\n5-salir\n");
    printf("-------------------------------------------------------------\n");
    printf("Opcion: ");
    scanf("%i", &opc);
    printf("-------------------------------------------------------------\n");
    printf("Ingresa el primer numero: ");
    scanf("%f", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &b);
    printf("-------------------------------------------------------------\n");

    switch (opc)
    {
    case 1:
      printf("La suma es: %f\n", suma(a, b));
      break;
    case 2:
      printf("La resta es: %f\n", resta(a, b));
      break;
    case 3:
      printf("La multiplicacion es: %f\n", multiplicacion(a, b));
      break;
    case 4:
      if (b == 0)
      {
        printf("No se puede dividir entre 0\n");
      }
      else
      {
        printf("La division es: %.2f\n", division(a, b));
      }
      break;
    case 5:

      break;
    default:
      printf("Opcion no valida\n");
      break;
    }
  } while (opc != 5);
  return 0;
}
