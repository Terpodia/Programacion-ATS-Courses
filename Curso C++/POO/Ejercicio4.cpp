/* EJERCICIO 4: Crear un programa en C++ que tenga la siguiente jerarquia
de clases: Animal (clase padre) - > Humano (clase hija)
- > Perro (clase hija), y hacer polimorfismo con el metodo comer().
*/

#include <iostream>
using namespace std;

class Animal {
private:
  string raza;
  int edad;

public:
  Animal(string, int);
  ~Animal();
  virtual void mostrarRaza();
  virtual void comer();
};

class Humano : public Animal {
private:
  string nombre;

public:
  Humano(string, int, string);
  ~Humano();
  void mostrarRaza();
  void comer();
};

class Perro : public Animal {
private:
  string nombre;

public:
  Perro(string, int, string);
  ~Perro();
  void mostrarRaza();
  void comer();
};

Animal::Animal(string _raza, int _edad) {
  raza = _raza;
  edad = _edad;
}

Animal::~Animal() {}

void Animal::mostrarRaza() {
  cout << "Raza: " << raza << endl;
  cout << "Edad: " << edad << endl;
}

void Animal::comer() { cout << "El " << raza << " esta comiendo" << endl; }

Humano::Humano(string _raza, int _edad, string _nombre) : Animal(_raza, _edad) {
  nombre = _nombre;
}

Humano::~Humano() {}

void Humano::mostrarRaza() {
  Animal::mostrarRaza();
  cout << "Nombre: " << nombre << endl;
}

void Humano::comer() {
  cout << nombre << " esta comiendo pollo con arroz" << endl;
}

Perro::Perro(string _raza, int _edad, string _nombre) : Animal(_raza, _edad) {
  nombre = _nombre;
}

Perro::~Perro() {}

void Perro::mostrarRaza() {
  Animal::mostrarRaza();
  cout << "Nombre: " << nombre << endl;
}

void Perro::comer() {
  cout << "El perro " << nombre << " esta comiendo pienso" << endl;
}

int main() {

  Animal *vector[3];

  vector[0] = new Perro("Perro", 9, "Choi");
  vector[1] = new Humano("Humano", 25, "Juan");
  vector[2] = new Animal("Dinosaurio", 30);

  vector[0]->mostrarRaza();
  vector[0]->comer();
  cout << "\n";
  vector[1]->mostrarRaza();
  vector[1]->comer();
  cout << "\n";
  vector[2]->mostrarRaza();

  return 0;
}