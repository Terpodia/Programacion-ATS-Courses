/*Pedirle al usuario que digite una cadena de caracteres, almacenarlo en un
arreglo y copiarlo a otro arreglo de caracteres*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra[100];
  char palabra2[100];

  cout << "Escriba las palabras que desee escribir: ";
  cin.getline(palabra, 100, '\n');

  strcpy(palabra2, palabra);
  cout << "\nSe ha almacenado su cadena de caracteres " << palabra2
       << " exitosamente";

  return 0;
}