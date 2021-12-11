// Polimorfismo

#include <iostream>
using namespace std;

class Persona {
private:
  string nombre;
  int edad;

public:
  Persona(string, int);
  ~Persona();
  virtual void mostrar();
};

class Alumno : public Persona {
private:
  float notaFinal;

public:
  Alumno(string, int, float);
  ~Alumno();
  void mostrar();
};

class Profesor : public Persona {
private:
  string materia;

public:
  Profesor(string, int, string);
  ~Profesor();
  void mostrar();
};

Persona::Persona(string _nombre, int _edad) {
  nombre = _nombre;
  edad = _edad;
}

Persona::~Persona() {}

void Persona::mostrar() {
  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
}

Alumno::Alumno(string _nombre, int _edad, float _notaFinal)
    : Persona(_nombre, _edad) {
  notaFinal = _notaFinal;
}

Alumno::~Alumno() {}

void Alumno::mostrar() {
  Persona::mostrar();
  cout << "Nota final: " << notaFinal << endl;
}

Profesor::Profesor(string _nombre, int _edad, string _materia)
    : Persona(_nombre, _edad) {
  materia = _materia;
}

Profesor::~Profesor() {}

void Profesor::mostrar() {
  Persona::mostrar();
  cout << "Materia: " << materia << endl;
}

int main() {
  Persona *vector[3];
  vector[0] = new Alumno("Alejandro", 20, 18.9);
  vector[1] = new Alumno("Pedro", 18, 17.6);
  vector[2] = new Profesor("Diego", 36, "Computacion");

  vector[0]->mostrar();
  cout << "\n";
  vector[1]->mostrar();
  cout << "\n";
  vector[2]->mostrar();

  return 0;
}