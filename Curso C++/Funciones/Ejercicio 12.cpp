/* Escriba una funcion que tome como parametros un arreglo y su tamanio y
diga si el arreglo esta ordenado crecientemente */

#include <iostream>
using namespace std;

void pedirDatos();
void orden(int n[], int tam);

int n[100], tam;
int creciente = 1, decreciente = 1;

int main() {

  pedirDatos();
  orden(n, tam);

  return 0;
}

void pedirDatos() {

  cout << "Digite el numero de elementos: ";
  cin >> tam;

  cout << "\n\tDigite los elementos en orden creciente o decreciente" << endl;

  for (int i = 0; i < tam; i++) {
    cout << i + 1 << ". Digite un numero: ";
    cin >> n[i];
  }
}

void orden(int n[], int tam) {
  for (int i = 0; i < tam - 1; i++) {

    if (n[i] <= n[i + 1]) {
      creciente++;
    }
    if (n[i] >= n[i + 1]) {
      decreciente++;
    }
  }
  if (creciente == tam) {
    cout << "Estan ordenados los elementos en forma creciente ";
  } else if (decreciente == tam) {
    cout << "Estan ordenados los elementos en forma decreciente";
  } else {
    cout << "Los elementos no estan ordenados";
  }
}