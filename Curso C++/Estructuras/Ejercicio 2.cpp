/* Hacer una estructura llamada alumno, en la cual se tendran los
siguientes campos: Nombre, edad, promedio; pedir datos al usuario
para 3 alumnos, comprobar cual de los tres tiene mejor promedio y
posteriormente  imprimir los datos del alumno */

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct datos_alumno {
  char nombre[30];
  int edad;
  float promedio;

} alumnos[2];

int main() {

  float mejor;

  for (int i = 0; i < 3; i++) {
    cout << "\t\tAlumno " << i + 1;
    cout << "\n";

    cout << "Nombre: ";
    cin.getline(alumnos[i].nombre, 30, '\n');

    cout << "Edad: ";
    cin >> alumnos[i].edad;

    cin.ignore();

    cout << "Promedio: ";
    cin >> alumnos[i].promedio;

    cin.ignore();
  }
  cout << "\n\n";

  if ((alumnos[0].promedio > alumnos[1].promedio) &&
      (alumnos[0].promedio > alumnos[2].promedio)) {

    mejor = alumnos[0].promedio;
    cout << "\t\tMEJOR PROMEDIO";
    cout << "\n";
    cout << "Nombre: " << alumnos[0].nombre;
    cout << "\n";
    cout << "Edad: " << alumnos[0].edad;
    cout << "\n";
    cout << "Promedio: " << mejor;

  }

  else if ((alumnos[1].promedio > alumnos[0].promedio) &&
           (alumnos[1].promedio > alumnos[2].promedio)) {

    mejor = alumnos[1].promedio;
    cout << "\t\tMEJOR PROMEDIO";
    cout << "\n";
    cout << "Nombre: " << alumnos[1].nombre;
    cout << "\n";
    cout << "Edad: " << alumnos[1].edad;
    cout << "\n";
    cout << "Promedio: " << mejor;

  }

  else if ((alumnos[2].promedio > alumnos[0].promedio) &&
           (alumnos[2].promedio > alumnos[1].promedio)) {

    mejor = alumnos[2].promedio;
    cout << "\t\tMEJOR PROMEDIO";
    cout << "\n";
    cout << "Nombre: " << alumnos[2].nombre;
    cout << "\n";
    cout << "Edad: " << alumnos[2].edad;
    cout << "\n";
    cout << "Promedio: " << mejor;
  }

  return 0;
}