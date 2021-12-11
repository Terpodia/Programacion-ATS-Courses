// Busqueda binaria

#include <iostream>

using namespace std;

int main() {

  int n[] = {1, 2, 3, 4, 5};
  int sup, inf, mitad;
  int dato;
  char band = 'F';

  dato = 3;
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
  } else if (band == 'F') {
    cout << "El dato no se encuentra en el arreglo";
  }

  return 0;
}