// Destructor

#include <iostream>
using namespace std;

class Perro {
private:
  string nombre, raza;

public:
  Perro(string, string); // Constructor
  ~Perro();              // Destructor
  void mostrarDatos();
  void jugar();
};

int main() {
  Perro p1("Fido", "Doberman");
  p1.mostrarDatos();
  p1.jugar();
  p1.~Perro(); // Destruyendo objeto, no hace falta ponerlo, el destructor
               // trabaja siempre una vez terminado el programa.

  return 0;
}

// Constructor
Perro::Perro(string _nombre, string _raza) {
  nombre = _nombre;
  raza = _raza;
}

// Destructor
Perro::~Perro() {}

void Perro::mostrarDatos() {
  cout << "El nombre del perro es: " << nombre << endl;
  cout << "La raza del perro es: " << raza << endl;
}

void Perro::jugar() { cout << nombre << " esta jugando" << endl; }
