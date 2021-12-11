/* Escriba un programa en C++ que devuelva la parte
fraccionaria de cualquier numero introducido por el
usuario. Por ejemplo, si se introduce el numero
256.879, deberia desplegarse el numero 0.879 */

#include <iostream>
using namespace std;

float numero;

void pedirDatos();
void parteFraccionaria(float x);

int main() {

  pedirDatos();
  parteFraccionaria(numero);

  return 0;
}

void pedirDatos() {

  cout << "Digite un numero decimal: ";
  cin >> numero;
}

void parteFraccionaria(float x) {

  int difererencia;
  difererencia = x;

  x -= difererencia;

  cout << "La parte fraccionaria del numero digitado es " << x;
}