// Busqueda secuencial

#include <iostream>

using namespace std;

int main() {

  int numeros[] = {3, 5, 2, 4, 1};
  int i, dato;
  int band = 'F';

  dato = 4;
  i = 0;
  while (band == 'F' && i < 5) {
    if (numeros[i] == dato) {
      band = 'V';
    }
    i++;
  }
  if (band == 'V') {
    cout << "El numero se encuentra en la posicion: " << i - 1;
  } else if (band == 'F') {
    cout << "El numero no existe en el arreglo";
  }

  return 0;
}