#include <stdio.h>
#include <math.h>
#include <windows.h>

float suma(float a, float b)
{
  float resultado = a + b;
  return resultado;
}

float resta(float a, float b)
{
  float resultado = a - b;
  return resultado;
}

float multiplicacion(float a, float b)
{
  float resultado = a * b;
  return resultado;
}

float division(float a, float b)
{
  if (b == 0)
  {
    printf("No se puede dividir entre 0\n");
    return 0;
  }
  float resultado = a / b;
  return resultado;
}

float modulo(float a, float b)
{
  float resultado = fmod(a, b);
  return resultado;
}

float potencia(float a, float b)
{
  float resultado = pow(a, b);
  return resultado;
}

void formulaCuadratica(float a, float b, float c)
{
  float discriminante = pow(b, 2) - 4 * a * c;
  if (discriminante < 0)
  {
    printf("No hay solución real\n");
    return;
  }
  float x1 = (-b + sqrt(discriminante)) / (2 * a);
  float x2 = (-b - sqrt(discriminante)) / (2 * a);
  printf("x1 = %.2f\n", x1);
  printf("x2 = %.2f\n", x2);
  printf("Presiona una tecla para continuar...");
  getchar();
  getchar();
}

int main()
{
  int opcion;
  float a, b, c, resultado;
  do
  {
    a = 0;
    b = 0;
    c = 0;
    resultado = 0;
    opcion = 0;

    printf("---------------------------\n");
    printf("Calculadora\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. Módulo\n");
    printf("6. Potencia\n");
    printf("7. Formula cuadrática\n");
    printf("8. Salir\n");
    printf("---------------------------\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    if (opcion != 8)
    {
      printf("Ingrese el primer número: ");
      scanf("%f", &a);
      printf("Ingrese el segundo número: ");
      scanf("%f", &b);
      if (opcion == 7)
      {
        printf("Ingrese el valor de c: ");
        scanf("%f", &c);
      }
    }

    switch (opcion)
    {
    case 1:
      resultado = suma(a, b);
      break;
    case 2:
      resultado = resta(a, b);
      break;
    case 3:
      resultado = multiplicacion(a, b);
      break;
    case 4:
      resultado = division(a, b);
      break;
    case 5:
      resultado = modulo(a, b);
      break;
    case 6:
      resultado = potencia(a, b);
      break;
    case 7:
      formulaCuadratica(a, b, c);
      break;
    case 8:
      printf("Saliendo...\n");
      break;
    default:
      printf("Opción no válida\n");
    }
    if (opcion != 7 && opcion != 8)
    {
      printf("Resultado: %.2f\n", resultado);
      printf("Presiona una tecla para continuar...");
      getchar();
      getchar();
    }

  } while (opcion != 8);
}