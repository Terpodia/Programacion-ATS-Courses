/* Realizar un programa que lea un arreglo de estructuras los datos de N
empleados de la empresa y que imprima los datos del empleado con mayor y
menor salario */

#include <iostream>

using namespace std;

struct Empleado {
  char nombre[20];
  float salario;
} emp[100];

int main() {

  int n;
  float mayor = 0, menor = 999999;
  int posM, posm;

  cout << "Digite el numero de empleados: ";
  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++) {

    cout << "\t\tEmpleado " << i + 1;
    cout << "\nDigite su nombre: ";
    cin.getline(emp[i].nombre, 20, '\n');
    cout << "Salario: ";
    cin >> emp[i].salario;
    cin.ignore();

    if (emp[i].salario > mayor) {
      mayor = emp[i].salario;
      posM = i;
    }

    if (emp[i].salario < menor) {
      menor = emp[i].salario;
      posm = i;
    }

    cout << "\n";
  }

  cout << "\t\tEmpleado con mayor salario";
  cout << "\nNombre: " << emp[posM].nombre;
  cout << "\nSalario: " << emp[posM].salario;
  cout << "\n\n";

  cout << "\t\tEmpleado con menor salario";
  cout << "\nNombre: " << emp[posm].nombre;
  cout << "\nSalario: " << emp[posm].salario;

  return 0;
}
