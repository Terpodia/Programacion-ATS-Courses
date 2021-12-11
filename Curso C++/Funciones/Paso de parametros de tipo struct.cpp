// Paso de parametros de tipo estructura

#include <iostream>
using namespace std;

struct Persona {
  char nombre[30];
  int edad;
} p1;

void pedirDatos();
void mostrarDatos(Persona);

int main() {

  pedirDatos();

  mostrarDatos(p1);

  return 0;
}

void pedirDatos() {

  cout << "Escriba su nombre: ";
  cin.getline(p1.nombre, 30, '\n');

  cout << "Digite su edad: ";
  cin >> p1.edad;
}

void mostrarDatos(Persona p) {
  cout << "\nSu nombre es " << p.nombre;
  cout << "\nSu edad es " << p.edad << " anios";
}