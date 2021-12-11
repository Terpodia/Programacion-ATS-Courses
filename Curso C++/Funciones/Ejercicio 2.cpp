/*Escriba una funcion llamada al_cuadrado() que
calcule el cuadrado del valor que se le
transmite y despliegue el resultado. La
funcion debera ser capaz de elevar al cuadrado
numeros flotantes */

#include <iostream>
using namespace std;

void pedirDatos();
void al_cuadrado(float x);

float n;

int main() {

  pedirDatos();
  al_cuadrado(n);

  return 0;
}

void pedirDatos() {

  cout << "Digite un numero: ";
  cin >> n;
  cout << "\n";
}

void al_cuadrado(float x) {
  float cuadrado;
  cuadrado = x * x;
  cout << "El cuadrado del numero es " << cuadrado;
}