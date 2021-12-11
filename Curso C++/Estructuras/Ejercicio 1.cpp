/*	Hacer una estructura llamada corredor, en la cual se tendran los siguientes
campos: nombre, edad, sexo, club; pedir datos al usuario para un corredor, y
asignar una categoria de competicion.

- Juvenil < = 18.
- Senior < = 40 anos.
- Veterano > 40 anos.

    Posteriormente imprimir todos los datos del corredor, incluida su categoria
de competicion. */

#include <iostream>
#include <string.h>

using namespace std;

struct corredor {
  char nombre[30];
  int edad;
  char sexo[20];
  char club[30];
} persona;

int main() {

  char categoria[30];

  cout << "Nombre del corredor: ";
  cin.getline(persona.nombre, 30, '\n');

  cout << "Edad: ";
  cin >> persona.edad;
  cin.ignore();

  cout << "Sexo: ";
  cin.getline(persona.sexo, 30, '\n');

  cout << "Club: ";
  cin.getline(persona.club, 30, '\n');

  if (persona.edad <= 18) {
    strcpy(categoria, "Juvenil");
  }

  else if (persona.edad <= 40) {
    strcpy(categoria, "Senior");
  }

  else {
    strcpy(categoria, "Veterano");
  }

  cout << "\n";

  cout << "Nombre: " << persona.nombre << "\n";
  cout << "Edad: " << persona.edad << "\n";
  cout << "Sexo: " << persona.sexo << "\n";
  cout << "Categoria: " << categoria << "\n";

  return 0;
}