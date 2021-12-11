// Funcion strcat. Concatenar cadenas

#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra1[] = "Esto es una cadena";
  char palabra2[] = " de ejemplo";
  char palabra3[30];

  strcpy(palabra3, palabra1);
  strcat(palabra3, palabra2);

  cout << palabra3;

  return 0;
}