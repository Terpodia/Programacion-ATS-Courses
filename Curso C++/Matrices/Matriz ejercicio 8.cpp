// Escriba un programa que multiplique 2 matrices 3*3

#include <iostream>
using namespace std;

int main() {

  int numeros1[3][3];
  int numeros2[3][3];
  int multiplicacion[3][3];

  cout << "\t\tPrimera matriz" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Digite un numero[" << i << "][" << j << "]: ";
      cin >> numeros1[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "\t" << numeros1[i][j];
    }
    cout << endl;
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
      cout << "\t" << numeros2[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      multiplicacion[i][j] = numeros1[i][j] * numeros2[i][j];
    }
  }

  cout << "\n\t\tLa multiplicacion es: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "\t" << multiplicacion[i][j];
    }
    cout << endl;
  }

  return 0;
}