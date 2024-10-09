/* calcular IMC y decirme si esta en sobrepeso, normal o por debajo*/

#include <stdio.h>=

int main()
{
  float imc;
  char res;
  do
  {
    printf("Ingresa tu IMC: ");
    scanf("%f", &imc);
    if (imc < 18.5)
    {
      printf("Tu IMC es %.2f, estas por debajo del peso\n", imc);
    }
    else if (imc >= 18.5 && imc < 24.9)
    {
      printf("Tu IMC es %.2f, estas en un peso normal\n", imc);
    }
    else if (imc >= 24.9 && imc < 29.9)
    {
      printf("Tu IMC es %.2f, estas en sobrepeso\n", imc);
    }
    else if (imc >= 29.9 && imc < 34.9)
    {
      printf("Tu IMC es %.2f, tienes obesidad tipo 1\n", imc);
    }
    else if (imc >= 34.9 && imc < 39.9)
    {
      printf("Tu IMC es %.2f, tienes obesidad tipo 2\n", imc);
    }
    else if (imc >= 39.9 && imc < 50)
    {
      printf("Tu IMC es %.2f, tienes obesidad tipo 3\n", imc);
    }
    else
    {
      printf("Tu IMC es %.2f, tienes obesidad tipo 4\n", imc);
    }
    printf("Deseas calcular otro IMC? (s/n): ");
    scanf(" %c", &res);
  } while (res == 's');
  return 0;
}