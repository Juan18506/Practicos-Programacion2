#include <stdio.h>
#include <math.h>

bool esPrimo(int num)
{
  int i = 2;
  int limite = trunc(sqrt(num));

  while ((i <= limite) && (num % i != 0))
    i++;

  return !(i <= limite) && (num != 0) && (num != 1);
}

void PrimosEntreAyB(int a, int b)
{
  if (a > b)
  {
    int aux = a;
    a = b;
    b = aux;
  };

  for (int i = a; i <= b; i++)
    if (esPrimo(i))
      printf("%d \n", i);
}

int main(int argc, char const *argv[])
{
  int a, b;
  printf("Ingresa 2 numeros enteros: ");
  scanf("%d %d", &a, &b);
  PrimosEntreAyB(a, b);
  return 0;
}
