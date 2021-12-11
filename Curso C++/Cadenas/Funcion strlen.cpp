// Funcion strlen(), permite verificar el numero de elementos de la cadena

#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra[] = "Hola Mundo";
  int longitud;

  cout << palabra << endl;
  longitud = strlen(palabra);

  cout << "\nEl tamano de la palabra es: " << longitud;

  return 0;
}