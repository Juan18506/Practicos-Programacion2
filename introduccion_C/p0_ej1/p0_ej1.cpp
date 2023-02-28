#include <stdio.h>

int PromClase(int cal1, int cal2, int cal3, int cal4, int cal5)
{
  int menorCalificacion = cal1;
  if (cal2 < menorCalificacion)
    menorCalificacion = cal2;
  if (cal3 < menorCalificacion)
    menorCalificacion = cal3;
  if (cal4 < menorCalificacion)
    menorCalificacion = cal4;
  if (cal5 < menorCalificacion)
    menorCalificacion = cal5;

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
