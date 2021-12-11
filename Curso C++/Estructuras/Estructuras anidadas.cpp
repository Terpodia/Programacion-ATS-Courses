// Estructuras anidadas

#include <iostream>

using namespace std;

struct info_direccion {
  char direccion[30];
  char ciudad[30];
  char provincia[30];
};

struct empleado {
  char nombre[30];
  struct info_direccion dir_empleado;
  double salario;
} empleados[2];

int main() {

  for (int i = 0; i < 2; i++) {
    cout << "Digite el nombre del empleado " << i + 1 << " :";
    cin.getline(empleados[i].nombre, 30, '\n');
    cout << "Digite su direccion: ";
    cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
    cout << "Digite su ciudad: ";
    cin.getline(empleados[i].dir_empleado.ciudad, 30, '\n');
    cout << "Digite su provincia: ";
    cin.getline(empleados[i].dir_empleado.provincia, 30, '\n');
    cout << "Digite su salario: ";
    cin >> empleados[i].salario;
    cin.ignore();
    cout << "\n";
  }

  for (int i = 0; i < 2; i++) {
    cout << "Nombre " << i + 1 << " : " << empleados[i].nombre << endl;
    cout << "Direccion: " << empleados[i].dir_empleado.direccion << endl;
    cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
    cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
    cout << "Salario: " << empleados[i].salario << endl;
    cout << "\n";
  }

  return 0;
}