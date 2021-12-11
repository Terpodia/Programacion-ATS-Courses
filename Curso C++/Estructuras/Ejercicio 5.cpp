/* Hacer dos estructuras, una llamada promedio que tendra
los siguientes campos: nota1, nota2 y nota3; y la otra
llamada alumno que tendra los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este
anidada en la estructura alumno, luego pedir todos los
datos para un alumno, luego calcular su promedio, y por
ultimo imprimir todos sus datos incluidos el promedio */

#include <iostream>

using namespace std;

struct Promedio {
  float nota1;
  float nota2;
  float nota3;
};
struct Alumno {
  char nombre[30];
  char sexo[10];
  int edad;
  struct Promedio prom;
} alumno;

int main() {
  float promedio;

  cout << "Digite su nombre: ";
  cin.getline(alumno.nombre, 30, '\n');

  cout << "Digite su sexo: ";
  cin.getline(alumno.sexo, 10, '\n');

  cout << "Digite su edad: ";
  cin >> alumno.edad;

  cout << "\n\tDigite sus Notas" << endl;
  cout << "Nota1: ";
  cin >> alumno.prom.nota1;
  cout << "Nota2: ";
  cin >> alumno.prom.nota2;
  cout << "Nota3: ";
  cin >> alumno.prom.nota3;
  cout << "\n";

  promedio = (alumno.prom.nota1 + alumno.prom.nota2 + alumno.prom.nota3) / 3;
  cout << "\tDatos";
  cout << "\n";

  cout << "Nombre: " << alumno.nombre << endl;
  cout << "Sexo: " << alumno.sexo << endl;
  cout << "Edad: " << alumno.edad << endl;
  cout << "Promedio: " << promedio;

  return 0;
}