// Ordenamiento por seleccion

#include <iostream>

using namespace std;

int main() {

  int numeros[] = {3, 1, 5, 2, 4};
  int min, aux;

  for (int i = 0; i < 5; i++) {
    min = i;
    for (int j = i + 1; j < 5; j++) {
      if (numeros[j] < numeros[min]) {
        min = j;
      }
    }
    aux = numeros[i];
    numeros[i] = numeros[min];
    numeros[min] = aux;
  }

  cout << "\tOrden Ascendente: ";
  for (int i = 0; i < 5; i++) {
    cout << numeros[i] << " ";
  }
  cout << "\n\tOrden Descendente: ";
  for (int i = 4; i >= 0; i--) {
    cout << numeros[i] << " ";
  }

  return 0;
}