/* Realice una funcion que tome como parametros un arreglo de numeros enteros y
devuelva la suma de sus elementos */

#include <iostream>
using namespace std;

void pedirDatos();
int suma(int n[], int tam);

int n[100];
int tam;

int main() {

  pedirDatos();

  cout << "\nLa suma de los elementos es: " << suma(n, tam);

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

int suma(int n[], int tam) {
  int suma = 0;
  for (int i = 0; i < tam; i++) {
    suma += n[i];
  }
  return suma;
}
