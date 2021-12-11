/*Escribe un programa que defina un arreglo de numeros desordenando, ordenarlo
y buscar un dato utilizando la busqueda binaria */

#include <iostream>

using namespace std;

int main() {

  int n[] = {3, 4, 2, 1, 5};
  int min, sup, inf, mitad;
  int aux;
  int dato;
  char band = 'F';

  for (int i = 0; i < 5; i++) {
    min = i;
    for (int j = i + 1; j < 5; j++) {
      if (n[j] < n[min]) {
        min = j;
      }
    }
    aux = n[i];
    n[i] = n[min];
    n[min] = aux;
  }

  dato = 5;
  inf = 0;
  sup = 5;

  while (inf < sup) {
    mitad = (inf + sup) / 2;

    if (n[mitad] == dato) {
      band = 'V';
      break;
    }
    if (n[mitad] < dato) {
      inf = mitad;
      mitad = (inf + sup) / 2;
    }
    if (n[mitad] > dato) {
      sup = mitad;
      mitad = (inf + sup) / 2;
    }
  }
  if (band == 'V') {
    cout << "El dato se encuentra en la posicion: " << mitad;
  }

  return 0;
}
