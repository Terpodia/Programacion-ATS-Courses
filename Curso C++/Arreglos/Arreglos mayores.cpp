// Escriba un programa que desarrolle un arreglo y diga cual es el mayor de los
// elementos.

#include <iostream>
using namespace std;

int main() {

  int numeros[100], n, mayor = 0;

  cout << "Digite el numero de elementos de su arreglo: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << i + 1 << ". Digite un numero: ";
    cin >> numeros[i];
  }

  for (int i = 0; i < n; i++) {
    cout << i << " -> " << numeros[i] << endl;
  }

  for (int i = 0; i < n; i++) {
    if (numeros[i] > mayor) {
      mayor = numeros[i];
    }
  }
  cout << "\nEl numero mayor es: " << mayor;
  return 0;
}
