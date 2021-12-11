/* Escriba una funcion escribeNumeros(int ini, int fin) que devuelva
en la salida estandar los numeros del ini al fin. Escriba una version
que escriba los numeros en orden ascendente. */

#include <iostream>
using namespace std;

int escribeNumeros(int ini, int fin);

int main() {

  int ini, fin;

  cout << "Digite un numero de inicio: ";
  cin >> ini;
  cout << "Digite un numero de fin: ";
  cin >> fin;

  for (int i = ini; i <= fin; i++) {
    cout << escribeNumeros(i, fin) << " ";
  }

  return 0;
}

int escribeNumeros(int ini, int fin) {

  if (ini > fin) {
    return ini;
  } else {
    return escribeNumeros(ini,
                          fin - 1); // 4-7, 4-6, 4<6, 4-5, 4<5, 4-4, 4=4, 4>3
  }
}