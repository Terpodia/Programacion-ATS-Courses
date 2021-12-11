/* Pasar parametros de tipo matriz.
Cuadrado de los elementos de una matriz */

#include <iostream>
using namespace std;

void original(int m[][2], int nfilas, int ncolumnas);
void Cuadrado(int m[][2], int nfilas, int ncolumnas);
void mostrarDatos(int m[][2], int nfilas, int ncolumnas);

int main() {

  const int nfilas = 3;
  const int ncolumnas = 2;

  int m[nfilas][ncolumnas] = {1, 2, 3, 4, 5, 6};

  original(m, nfilas, ncolumnas);
  Cuadrado(m, nfilas, ncolumnas);
  mostrarDatos(m, nfilas, ncolumnas);

  return 0;
}

void original(int m[][2], int nfilas, int ncolumnas) {
  cout << "\tMatriz original\n";
  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncolumnas; j++) {
      cout << "\t" << m[i][j];
    }
    cout << endl;
  }
}

void Cuadrado(int m[][2], int nfilas, int ncolumnas) {
  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncolumnas; j++) {
      m[i][j] *= m[i][j];
    }
  }
}

void mostrarDatos(int m[][2], int nfilas, int ncolumnas) {
  cout << "\n\tMatriz al Cuadrado\n";
  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncolumnas; j++) {
      cout << "\t" << m[i][j];
    }
    cout << endl;
  }
}