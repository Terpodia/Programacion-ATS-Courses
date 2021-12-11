// Ordenamientos: Metodo de la burbuja

#include <iostream>

using namespace std;

int main() {

  int n[] = {4, 5, 1, 2, 3};
  int aux;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      if (n[j] > n[j + 1]) {
        aux = n[j];
        n[j] = n[j + 1];
        n[j + 1] = aux;
      }
    }
  }

  cout << "\tOrden Ascendente: ";
  for (int i = 0; i < 5; i++) {
    cout << n[i] << " ";
  }

  cout << "\n";

  cout << "\tOrden Descendente: ";
  for (int i = 4; i >= 0; i--) {
    cout << n[i] << " ";
  }

  return 0;
}
