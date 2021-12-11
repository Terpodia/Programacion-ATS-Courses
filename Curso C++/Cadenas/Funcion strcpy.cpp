// Copiar el contenido de una cadena a otra, funcion strcpy

#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char nombre[] = "Diego";
  char nombre2[20];

  strcpy(nombre2, nombre);

  cout << nombre2;

  return 0;
}