// Defina una estructura

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct persona {
  char nombre[30];
  int edad;

} datos_p1, datos_p2;

int main() {

  cout << "Digite su nombre: ";
  cin.getline(datos_p1.nombre, 30, '\n');

  cout << "Digite su edad: ";
  cin >> datos_p1.edad;

  cin.ignore(); // Limpiar buffer.

  cout << "\nDigite el nombre de su amigo: ";
  cin.getline(datos_p2.nombre, 30, '\n');

  cout << "\nDigite su edad: ";
  cin >> datos_p2.edad;

  cout << "\nTu nombre es " << datos_p1.nombre << " y tu edad es "
       << datos_p1.edad;
  cout << "\nEl nombre de tu amigo es " << datos_p2.nombre << " y su edad es "
       << datos_p2.edad;

  return 0;
}