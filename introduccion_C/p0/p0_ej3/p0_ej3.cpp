#include <stdio.h>
#include <ctype.h>
#include <string.h>

int Ocurrencias(char frase[100], int largo, char letra) {
  char letraMinus = tolower(letra);
  int cantRepeticiones = 0;

  for (int i = 0; i < largo; i++) {
    if (letraMinus == tolower(frase[i])) {
      cantRepeticiones++;
    }
  }
  return cantRepeticiones;
}

int main(int argc, char const *argv[]) {
  char frase[100] = "Hoy es la clase de C*";
  int largo = strlen(frase);
  char letra = '*';
  printf("La cantidad de ocurrencias es: %d \n", Ocurrencias(frase, largo, letra));
  return 0;
}
