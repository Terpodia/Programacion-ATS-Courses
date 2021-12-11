/* Escribe un programa que le pregunte al usuario su nombre en
MAYUSCULAS y si su nombre comienza por A, digitar su nombre en
minusculas, sino, no ocurre nada */

#include <ctype.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char nombre[30];

  cout << "Digite su nombre en MAYUSCULAS: ";
  cin.getline(nombre, 30, '\n');

  if (nombre[0] == 'A') {
    for (int i = 0; i < strlen(nombre); i++) {
      nombre[i] = tolower(nombre[i]);
    }
    cout << endl << nombre;
  }

  return 0;
}