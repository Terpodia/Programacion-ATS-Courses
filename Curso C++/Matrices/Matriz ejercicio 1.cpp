/*Escriba un programa que le pida al usuario que digite una matriz y que muestre
el resultado en pantalla*/

#include <iostream>
using namespace std;

int main() {

  int numeros[100][100];
  int filas, columnas;

  // Almacenando resultado

  cout << "Digite el numero de filas: ";
  cin >> filas;
  cout << "Digite el numero de columnas: ";
  cin >> columnas;
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "Digite un numero[" << i << "][" << j << "] :";
      cin >> numeros[i][j];
    }
  }

  // Mostrando resultado en pantalla

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "\t" << numeros[i][j];
    }
    cout << endl;
  }

  return 0;
}