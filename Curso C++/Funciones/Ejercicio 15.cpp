/* Realiza una funcion que tenga como parametros una matriz, nfilas y ncolumnas.
Decir si la matriz es simetrica */

#include <iostream>
using namespace std;

void pedirDatos();
void simetria(int m[][100], int nfilas, int ncolumnas);

int m[100][100];
int nfilas, ncolumnas;

int main() {

  pedirDatos();
  simetria(m, nfilas, ncolumnas);

  return 0;
}

void pedirDatos() {
  cout << "Digite el numero de filas: ";
  cin >> nfilas;
  cout << "Digite el numero de columnas: ";
  cin >> ncolumnas;

  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncolumnas; j++) {
      cout << "Digite un numero [" << i << "][" << j << "]: ";
      cin >> m[i][j];
    }
  }
}

void simetria(int m[][100], int nfilas, int ncolumnas) {

  int contador = 0;
  if (nfilas == ncolumnas) {
    for (int i = 0; i < nfilas; i++) {
      for (int j = 0; j < ncolumnas; j++) {
        if (m[i][j] == m[j][i]) {
          contador++;
        }
      }
    }
  }

  if (contador == nfilas * ncolumnas) {
    cout << "La matriz es simetrica";
  } else {
    cout << "La matriz no es simetrica";
  }
}