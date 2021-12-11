/* Realice una funcion que dada una matriz y un numero de fila
de la matriz devuelva el menor de los elementos almacenados */

#include <iostream>
using namespace std;

void pedirDatos();
void mostrarMatriz(int m[][100], int nfilas, int ncolumnas);
void menorElemento(int m[][100], int nfilasD, int ncolumnas);

int m[100][100];
int nfilas, ncolumnas;
int nfilasD;

int main() {

  pedirDatos();
  mostrarMatriz(m, nfilas, ncolumnas);
  menorElemento(m, nfilasD, ncolumnas);

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

void mostrarMatriz(int m[][100], int nfilas, int ncolumnas) {
  cout << "\n\tMatriz digitada\n";
  for (int i = 0; i < nfilas; i++) {
    for (int j = 0; j < ncolumnas; j++) {
      cout << "\t" << m[i][j];
    }
    cout << "\n";
  }
}

void menorElemento(int m[][100], int nfilasD, int ncolumnas) {
  int menor = 999999;
  cout << "Escoja una fila de la matriz digitada: ";
  cin >> nfilasD;

  for (int i = 0; i < nfilasD - 1; i++) {
    for (int j = 0; j < ncolumnas; j++) {
      if (m[nfilasD - 1][j] < menor) {
        menor = m[nfilasD - 1][j];
      }
    }
  }
  cout << "El elemento menor de la fila escrita es: " << menor;
}
