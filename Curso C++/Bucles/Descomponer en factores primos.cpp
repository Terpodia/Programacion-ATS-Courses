/*
Realice un programa que calcule la descomposicion
en factores primos de un numero entero.
*/

#include <iostream>

using namespace std;

int main() {

  int n;

  cout << "Digite un numero entero: ";
  cin >> n;

  cout << endl << "La descomposicion en factores primos: " << endl;

  for (int i = 2; i <= n; i++) {

    while (n % i == 0) {
      n /= i;
      cout << i << endl;
    }
  }

  return 0;
}

//"Si puedes imaginarlo, puedes programarlo".