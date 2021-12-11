/*Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra
cadena para preguntarle al usuario su nombre, por ultimo anadir el nombre al
final de la primera cadena y mostrar el mensaje completo "Hola que tal
(NombreDelUsuario"*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra[] = "Hola que tal ";
  char nombre[30];
  char cadena[30];

  cout << "Cual es tu nombre?: ";
  cin.getline(nombre, 30, '\n');

  strcpy(cadena, palabra);
  strcat(cadena, nombre);

  cout << "\n" << cadena;

  return 0;
}