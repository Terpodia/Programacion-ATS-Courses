/*EJERCICIO 3: Realice un programa en C++, de tal manera
que se construya una solucion para la jerarquia(herencia):
Persona - empleado y Persona - estudiante - universitario.
*/

#include <iostream>
using namespace std;

class Persona {
private:
  string nombre;
  int edad;

public:
  Persona(string, int);
  ~Persona();
  void mostrarPersona();
};

class Estudiante : public Persona {
private:
  float notaFinal;
  string codigoAlumno;

public:
  Estudiante(string, int, float, string);
  ~Estudiante();
  void mostrarEstudiante();
};

class Universitario : public Estudiante {
private:
  string carrera;

public:
  Universitario(string, int, float, string, string);
  ~Universitario();
  void mostrarUniversitario();
};

class Empleado : public Persona {
private:
  float sueldo;
  string area;

public:
  Empleado(string, int, float, string);
  ~Empleado();
  void mostrarEmpleado();
};

int main() {
  Universitario u1("Diego", 24, 19.2, "12341234", "Ingieneria de computacion");
  Empleado e1("Juan", 30, 1500, "Servicio");

  u1.mostrarUniversitario();
  e1.mostrarEmpleado();

  return 0;
}

Persona::Persona(string _nombre, int _edad) {
  nombre = _nombre;
  edad = _edad;
}

Persona::~Persona() {}

void Persona::mostrarPersona() {
  cout << "Nombre: " << nombre << endl;
  cout << "Edad: " << edad << endl;
}

Estudiante::Estudiante(string _nombre, int _edad, float _notaFinal,
                       string _codigo)
    : Persona(_nombre, _edad) {
  notaFinal = _notaFinal;
  codigoAlumno = _codigo;
}

Estudiante::~Estudiante() {}

void Estudiante::mostrarEstudiante() {
  mostrarPersona();
  cout << "Codigo de Alumno: " << codigoAlumno << endl;
  cout << "Nota Final: " << notaFinal << endl;
}

Universitario::Universitario(string _nombre, int _edad, float _notaFinal,
                             string _codigo, string _carrera)
    : Estudiante(_nombre, _edad, _notaFinal, _codigo) {
  carrera = _carrera;
}

Universitario::~Universitario() {}

void Universitario::mostrarUniversitario() {
  mostrarEstudiante();
  cout << "Carrera: " << carrera << endl;
}

Empleado::Empleado(string _nombre, int _edad, float _sueldo, string _area)
    : Persona(_nombre, _edad) {
  sueldo = _sueldo;
  area = _area;
}

Empleado::~Empleado() {}

void Empleado::mostrarEmpleado() {
  mostrarPersona();
  cout << "Sueldo: " << sueldo << " dolares" << endl;
  cout << "Area de trabajo: " << area << endl;
}
