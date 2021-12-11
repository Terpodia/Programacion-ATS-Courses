// Hacer un programa que determine si una palabra es polindroma.

#include <iostream>
#include <string.h>

using namespace std;

int main() {
  string palabra;
  string palabra_volteada;

  cout << "Escriba una palabra: ";
  getline(cin, palabra);

  palabra_volteada = palabra;
  reverse(palabra_volteada.begin(), palabra_volteada.end());

  if (palabra == palabra_volteada) {
    cout << "La palabra es polindroma";
  }

  else {
    cout << "No es polindroma";
  }

  return 0;
}

// Para concatenar string con char solamente basta con variablea += variableb o
// variable c = a + b