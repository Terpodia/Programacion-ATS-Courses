// Introduccion a funciones

#include <iostream>

using namespace std;

// Prototipo de funcion
int encontrarMax(int x, int y);

int main() {

  int n1, n2;

  cout << "Digite dos numeros: ";
  cin >> n1 >> n2;

  cout << "El mayor de los dos numeros es: " << encontrarMax(n1, n2);

  return 0;
}

// Definicion de funcion
int encontrarMax(int x, int y) {

  if (x > y)
    return x;

  return y;
}