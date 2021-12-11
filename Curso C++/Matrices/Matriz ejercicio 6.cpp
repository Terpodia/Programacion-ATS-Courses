// Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include <iostream>
using namespace std;

int main() {

  int numeros1[3][3];
  int numeros2[3][3];
  int suma[3][3];

  cout << "\t\tPrimera matriz" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Digite un numero [" << i << "][" << j << "]: ";
      cin >> numeros1[i][j];
    }
  }

  cout << "\n\t\tSegunda matriz" << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Digite un numero[" << i << "][" << j << "]: ";
      cin >> numeros2[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      suma[i][j] = numeros1[i][j] + numeros2[i][j];
    }
  }

  cout << "\n\t\tLa suma es: " << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "\t" << suma[i][j];
    }
    cout << endl;
  }

  return 0;
}