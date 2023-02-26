#include <stdio.h>

int PromClase(int cal1, int cal2, int cal3, int cal4, int cal5)
{
  int calificaciones[5] = {cal1, cal2, cal3, cal4, cal5};
  int menorCalificacion = calificaciones[0];

  for (int i = 1; i < 5; i++)
  {
    if (calificaciones[i] < menorCalificacion)
    {
      menorCalificacion = calificaciones[i];
    };
  };

  return (cal1 + cal2 + cal3 + cal4 + cal5 - menorCalificacion) / 4;
}

int main(int argc, char const *argv[])
{
  int cal1, cal2, cal3, cal4, cal5;
  printf("Put the five califications: ");
  scanf("%d %d %d %d %d", &cal1, &cal2, &cal3, &cal4, &cal5);
  printf("El promedio de la clase es: %d \n", PromClase(cal1, cal2, cal3, cal4, cal5));
  return 0;
}
