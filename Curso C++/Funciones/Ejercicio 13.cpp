/* Escriba una funcion que reciba como parametros un arreglo y su tamanio,
cambiarle los signos a todos los elementos del arreglo */

#include <iostream>
using namespace std;

void pedirDatos();
void signos(int n[], int tam);
void mostrarResult(int n[], int tam);

int n[100], tam;

int main() {

  pedirDatos();
  signos(n, tam);
  mostrarResult(n, tam);

  return 0;
}

void pedirDatos() {

  cout << "Digite el numero de elementos: ";
  cin >> tam;

  for (int i = 0; i < tam; i++) {
    cout << i + 1 << ". Digite un numero: ";
    cin >> n[i];
  }
}

void signos(int n[], int tam) {

  for (int i = 0; i < tam; i++) {
    n[i] *= -1;
  }
}

void mostrarResult(int n[], int tam) {
  cout << "\n\tEl signo de los elementos ha sido cambiado: ";
  for (int i = 0; i < tam; i++) {
    cout << n[i] << " ";
  }
}