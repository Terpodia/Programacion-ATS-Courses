/*	Intercambiar el valor de dos valores utilizando paso de
parametros por referencia */

#include <iostream>
using namespace std;

void Intercambiar(int &, int &);

int main() {

  int num1 = 10, num2 = 67;

  cout << "El primer numero es: " << num1;
  cout << "\nEl segundo numero es: " << num2;

  Intercambiar(num1, num2);

  cout << "\nEl nuevo valor del primer numero es: " << num1;
  cout << "\nEl nuevo valor del segundo nume®o es: " << num2;

  return 0;
}

void Intercambiar(int &x, int &y) {

  int aux;

  aux = x;
  x = y;
  y = aux;
}