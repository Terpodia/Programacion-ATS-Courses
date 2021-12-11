/*Pedirle al usuario que digite dos cadenas de caracteres, e indicar
si ambas cadenas son iguales, en caso de no serlo, indicar cual
es mayor alfabeticamente. */

#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra1[100];
  char palabra2[100];

  cout << "Escriba una palabra: ";
  cin.getline(palabra1, 100, '\n');

  cout << "Escriba otra palabra: ";
  cin.getline(palabra2, 100, '\n');

  if (strcmp(palabra1, palabra2) == 0) {
    cout << "Las palabras son iguales";
  }

  else if (strcmp(palabra1, palabra2) > 0) {
    cout << "La primera palabra es mayor alfabeticamente";
  }

  else if (strcmp(palabra2, palabra1) > 0) {
    cout << "La segunda palabra es mayor alfabeticamente";
  }

  return 0;
}