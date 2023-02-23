#include <stdio.h>

int PromClase(int cal1, int cal2, int cal3, int cal4, int cal5) {
  return (cal1 + cal2 + cal3 + cal4 + cal5) / 5;
}

int main(int argc, char const *argv[]) 
{
  int cal1, cal2, cal3, cal4, cal5;
  printf("Put the five califications: ");
  scanf("%d %d %d %d %d", &cal1, &cal2, &cal3, &cal4, &cal5);
  printf("El promedio de la clase es: %d \n", PromClase(cal1, cal2, cal3, cal4, cal5));
  return 0;
}
