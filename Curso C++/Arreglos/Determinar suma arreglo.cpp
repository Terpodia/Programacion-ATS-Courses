/*Escribe un programa que determina si algun elemento del arreglo equivale a
la suma de los otros elementos*/

#include <iostream>
using namespace std;

int main() {
  int numeros[100], n, suma;
  cout << "Digite el numero de elementos del arreglo: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << i + 1 << ". Digite un numero: ";
    cin >> numeros[i];
  }

  for (int j = 0; j < n; j++) {
    suma = 0;
    for (int i = 0; i < n; i++) {

      if (i == j)
        continue;
      suma += numeros[i];
    }

    if (suma == numeros[j]) {
      cout << "El indice " << j
           << " tiene un numero que es igual a la suma de los demas elementos";
      break;
    }
  }

  return 0;
}