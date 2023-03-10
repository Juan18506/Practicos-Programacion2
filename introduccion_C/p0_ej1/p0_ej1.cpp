#include <stdio.h>

float PromClase(float cal1, float cal2, float cal3, float cal4, float cal5) {
  float menorCalificacion = cal1;
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

int main(int argc, char const *argv[]) {
  float cal1, cal2, cal3, cal4, cal5;
  printf("Put the five califications: ");
  scanf("%f %f %f %f %f", &cal1, &cal2, &cal3, &cal4, &cal5);
  printf("El promedio de la clase es: %.2f \n", PromClase(cal1, cal2, cal3, cal4, cal5));
  return 0;
}
