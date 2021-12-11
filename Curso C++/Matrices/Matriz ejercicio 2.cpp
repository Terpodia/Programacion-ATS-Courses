// Defina una matriz, muestrela en pantalla y muestre su diagonal principal

#include <iostream>
using namespace std;

int main() {

  int numeros[3][3] = {3, 4, 5, 6, 7, 8, 10, 11, 12};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "\t" << numeros[i][j];
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        cout << "\t" << numeros[i][j];
      } else
        cout << "\t";
    }
    cout << "\n";
  }

  return 0;
}