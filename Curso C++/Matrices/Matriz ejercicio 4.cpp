/*Pedir al usuario que digite el numero de elementos de su matriz, randomizar
los numeros de dicha matriz, meterlo dentro de otra matriz y mostrar el
resultado en pantalla*/

#include <iostream>
#include <time.h>
using namespace std;

int main() {
  int matriz[100][100];
  int fila, columnas;
  int numeros[100][100];
  int n;

  cout << "Digite el numero de filas: ";
  cin >> fila;
  cout << "Digite el numero de columnas: ";
  cin >> columnas;
  srand(time(NULL));

  for (int i = 0; i < fila; i++) {
    for (int j = 0; j < columnas; j++) {
      n = rand() % 100 + 1;
      numeros[i][j] = n;
    }
  }

  for (int i = 0; i < fila; i++) {
    for (int j = 0; j < columnas; j++) {
      matriz[i][j] = numeros[i][j];
    }
  }

  for (int i = 0; i < fila; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << "\t" << matriz[i][j];
    }
    cout << endl;
  }

  return 0;
}