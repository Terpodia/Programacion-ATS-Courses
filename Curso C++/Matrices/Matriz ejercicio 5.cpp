/*Escriba un programa que le pida al usuario una matriz 3*3 y que digite su
respectiva matriz transpuesta*/

#include <iostream>
using namespace std;

int main() {

  int numeros[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Digite un numero[" << i << "][" << j << "]: ";
      cin >> numeros[i][j];
    }
  }
  cout << "La matriz original es: " << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "\t" << numeros[i][j];
    }
    cout << endl;
  }
  cout << "La matriz transpuesta es: " << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "\t" << numeros[j][i];
    }
    cout << endl;
  }

  return 0;
}