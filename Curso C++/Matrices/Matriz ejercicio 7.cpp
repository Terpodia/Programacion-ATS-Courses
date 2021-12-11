// Escriba un programa que determine si una matriz es simetrica

#include <iostream>
using namespace std;

int main() {

  int numeros[3][3];
  int contador = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Digite un numero[" << i << "][" << j << "]: ";
      cin >> numeros[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (numeros[i][j] == numeros[j][i]) {
        contador++;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "\t" << numeros[i][j];
    }

    cout << endl;
  }

  if (contador == 9) {
    cout << "Es simetrica";
  } else {
    cout << "No es simetrica";
  }
  return 0;
}