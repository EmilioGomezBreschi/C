/* calcular IMC y decirme si esta en sobrepeso, normal o por debajo*/

#include <stdio.h>

float IMC(float peso, float altura)
{
  return peso / (altura * altura);
}

int main()
{
  float peso, altura, imc;
  printf("Ingresa tu peso en kg: ");
  scanf("%f", &peso);
  printf("Ingresa tu altura en m: ");
  scanf("%f", &altura);
  imc = IMC(peso, altura);
  if (imc < 18.5 && imc > 0)
  {
    printf("Tu IMC es %.2f, estas por debajo del peso\n", imc);
  }
  else if (imc >= 18.5 && imc <= 24.9)
  {
    printf("Tu IMC es %.2f, estas en un peso normal\n", imc);
  }
  else if (imc > 24.9 && imc <= 29.9)
  {
    printf("Tu IMC es %.2f, estas en sobrepeso\n", imc);
  }
  else if (imc > 29.9 && imc <= 34.9)
  {
    printf("Tu IMC es %.2f, tienes obesidad tipo 1\n", imc);
  }
  else if (imc > 34.9 && imc <= 39.9)
  {
    printf("Tu IMC es %.2f, tienes obesidad tipo 2\n", imc);
  }
  else
  {
    printf("Tu IMC es %.2f, tienes obesidad tipo 3\n", imc);
  }
  return 0;
}