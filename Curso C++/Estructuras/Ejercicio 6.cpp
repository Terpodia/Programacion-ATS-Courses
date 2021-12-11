/* Utiliza las 2 estructuras del problema 5,
pero ahora pedir datos para N alumnos, y calcular
cual de todos tiene el mejor promedio, e imprimir
los datos */

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
} alumno[100];

int main() {
  int n;
  float promedio[100];
  float mayor = 0;
  int posM;

  cout << "Digite el numero de alumnos: ";
  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++) {
    cout << "\n\t\tAlumno " << i + 1 << "\n";
    cout << "Nombre: ";
    cin.getline(alumno[i].nombre, 30, '\n');
    cout << "Sexo: ";
    cin.getline(alumno[i].sexo, 10, '\n');
    cout << "Edad: ";
    cin >> alumno[i].edad;
    cout << "_.Nota 1: ";
    cin >> alumno[i].prom.nota1;
    cout << "_.Nota 2: ";
    cin >> alumno[i].prom.nota2;
    cout << "_.Nota 3: ";
    cin >> alumno[i].prom.nota3;
    promedio[i] =
        (alumno[i].prom.nota1 + alumno[i].prom.nota2 + alumno[i].prom.nota3) /
        3;
    cin.ignore();
    cout << "\n";
  }

  for (int i = 0; i < n; i++) {
    if (promedio[i] > mayor) {
      mayor = promedio[i];
      posM = i;
    }
  }

  cout << "\tALUMNO CON MAYOR PROMEDIO! ";
  cout << "\nNombre: " << alumno[posM].nombre;
  cout << "\nSexo: " << alumno[posM].sexo;
  cout << "\nEdad: " << alumno[posM].edad;
  cout << "\nPromedio: " << promedio[posM];

  return 0;
}