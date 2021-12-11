// Funcion atoi y atof. Convertir cadenas a numeros.

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

  char numeros[] = "345";
  char numero[] = "345.689";
  int n;
  float d;

  n = atoi(numeros);
  // Pasando a entero

  cout << n << endl;

  d = atof(numero);
  // Pasando a decimal

  cout << d;

  return 0;
}