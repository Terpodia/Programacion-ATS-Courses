/* Escriba una funcion recursiva que calcule un numero elevado a una potencia
entera mayor o igual que cero: x^y.

    potencia(x,y) = x					, y = 1
                    x^potencia(x,y-1)	, y > 1
*/

#include <iostream>
using namespace std;

int potencia(int x, int y);

int main() {

  int numero, exponente;

  cout << "Digite un numero entero: ";
  cin >> numero;

  cout << "Digite un exponente ENTERO POSITIVO: ";
  cin >> exponente;

  cout << "La potencia de " << numero << " a la " << exponente
       << " es: " << potencia(numero, exponente);

  return 0;
}

int potencia(int x, int y) {

  if (y == 0) {
    x = 1;
  }

  else if (y == 1) {
    x = x;
  }

  else {
    x = x * potencia(x, y - 1); // 2^3 = 2 * 2^2 = 2 * 2^1 = 2*4 = 8
  }

  return x;
}
