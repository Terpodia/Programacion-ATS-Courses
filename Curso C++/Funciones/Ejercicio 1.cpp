/*Escriba una funcion llamada mult() que acepte dos numeros
en punto flotante como parametros, multiplique estos numeros
y despliegue el resultado*/

#include <iostream>

using namespace std;

void pedirDatos();
void mult(float x, float y);

float n1, n2;

int main() {

  pedirDatos();
  mult(n1, n2);

  return 0;
}

void pedirDatos() {

  cout << "Digite dos numeros: ";
  cin >> n1 >> n2;
}

void mult(float x, float y) {
  float multiplicacion;
  multiplicacion = x * y;

  cout << "La multiplicacion es " << multiplicacion;
}