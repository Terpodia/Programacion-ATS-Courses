// Meter una matriz 2*2 dentro de otra matriz

#include <iostream>
using namespace std;

int main() {

  int numeros[2][2] = {1, 2, 3, 4};
  int matriz[2][2];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matriz[i][j] = numeros[i][j];
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "\t" << matriz[i][j];
    }
    cout << endl;
  }

  return 0;
}