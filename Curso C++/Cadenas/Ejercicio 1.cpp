/*Escriba un programa que le pida al usuario que digite una cadena de
caracteres, luego verificar si la longitud de la cadena es mayor a 10 y
mostrarla en pantalla, caso contrario no mostrarla */

#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra[100];
  int longitud = 0;

  cout << "Escriba una palabra: " << endl;
  cin.getline(palabra, 100, '\n');
  longitud = strlen(palabra);

  if (longitud > 10) {
    cout << "La palabra " << palabra << " tiene mas de 10 elementos";
  }

  return 0;
}