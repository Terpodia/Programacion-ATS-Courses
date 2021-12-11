// Herencia

#include <iostream>
using namespace std;

class Persona {
private:
  int edad;
  string nombre;

public:
  Persona(int, string);
  ~Persona();
  void mostrarPersona();
};

class Alumno : public Persona {
private:
  string codigoAlumno;
  float notaFinal;

public:
  Alumno(int, string, string, float);
  ~Alumno();
  void mostrarAlumno();
};

int main() {
  Alumno a1(20, "Alejandro", "12312312", 19.2);
  a1.mostrarAlumno();

  return 0;
}

// Constructor de la clase Persona (Clase Padre)
Persona::Persona(int _edad, string _nombre) {
  edad = _edad;
  nombre = _nombre;
}

Persona::~Persona() {}

void Persona::mostrarPersona() {
  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
}

Alumno::Alumno(int _edad, string _nombre, string _codigo, float _notaFinal)
    : Persona(_edad, _nombre) {
  codigoAlumno = _codigo;
  notaFinal = _notaFinal;
}

void Alumno::mostrarAlumno() {
  mostrarPersona();
  cout << "Codigo de Alumno: " << codigoAlumno << endl;
  cout << "Nota final: " << notaFinal << endl;
}

Alumno::~Alumno() {}