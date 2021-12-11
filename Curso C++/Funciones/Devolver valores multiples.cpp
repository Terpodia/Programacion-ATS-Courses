// Devolver valores multiples

#include <iostream>
using namespace std;

int num1, num2;

void pedirDatos();
void calculo(int x, int y, int &, int &);

int main() {

  int producto = 0, suma = 0;

  pedirDatos();
  calculo(num1, num2, suma, producto);

  cout << "\nLa suma es: " << suma;
  cout << "\nEl producto es: " << producto;

  return 0;
}

void pedirDatos() {

  cout << "Digite dos numeros: ";
  cin >> num1 >> num2;
}

void calculo(int x, int y, int &suma, int &producto) {

  suma = x + y;
  producto = x * y;
}