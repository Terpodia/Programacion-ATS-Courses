// Clases em C++

#include <iostream>
#include <ostream>
using namespace std;

class Persona {
private: // Atributos
  int edad;
  string nombre;

public:                 // Metodos
  Persona(int, string); // Constructor
  void leer();
  void correr();
};

int main() {

  Persona p1 = Persona(20, "Julio");
  p1.leer();
  Persona p2(19, "Maria");
  p2.correr();
  Persona p3(22, "Juan");
  p3.leer();
  p3.correr();

  return 0;
}

Persona::Persona(int _edad, string _nombre) {
  edad = _edad;
  nombre = _nombre;
}
void Persona::leer() {
  cout << "Soy " << nombre << " y estoy leyendo un libro" << endl;
}

void Persona::correr() {
  cout << "Soy " << nombre << " y estoy corriendo una maraton" << endl;
}