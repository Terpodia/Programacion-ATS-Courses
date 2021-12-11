// Ordenamientos por insercion

#include <iostream>

using namespace std;

int main() {

  int n[] = {4, 3, 1, 2, 5};
  int aux, pos;

  for (int i = 0; i < 5; i++) {
    pos = i;
    aux = n[i];

    while ((pos > 0) && (n[pos - 1] > aux)) {
      n[pos] = n[pos - 1];
      pos--;
    }
    n[pos] = aux;
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