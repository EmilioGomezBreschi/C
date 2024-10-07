/*fibonacci con while, do-while e if*/

#include <stdio.h>

int main()
{
  int n, l;
  int k = 0;
  int j = 0;
  int i = 1;
  printf("Cuantos numeros de fibonacci quieres?:\n");
  scanf("%d", &n);
  printf("----------------------------------------\n");
  printf("Ciclo con FOR\n");
  for (l = 0; l < n; l++)
  {
    /*Fibonacci*/
    k = i + j;
    i = j;
    j = k;
    printf("%d,", k);
  }
  printf("\n----------------------------------------\n");
  printf("Conteo con WHILE\n");
  l = 0;
  k = 0;
  j = 0;
  i = 1;
  while (l < n)
  {
    /*Fibonacci*/
    k = i + j;
    i = j;
    j = k;
    printf("%d,", k);

    l++;
  }
  printf("\n----------------------------------------\n");
  printf("Conteo con DO-WHILE\n");
  l = 0;
  k = 0;
  j = 0;
  i = 1;
  do
  {
    /*Fibonacci*/
    k = i + j;
    i = j;
    j = k;
    printf("%d,", k);

    l++;
  } while (l < n);
  return 0;
}