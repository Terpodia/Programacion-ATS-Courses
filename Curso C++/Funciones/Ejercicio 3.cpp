/* Escriba una funcion nombrada funpot() que eleve un
numero entero que se le transmite a una potencia en
numero entero positivo y despliegue el resultado.
El numero entero posivo debera ser el segundo
valor transmitido a la funcion */

#include <iostream>
using namespace std;

int numero, exponente;

void pedirDatos();
void funpot(int x, int y);

int main() {

  pedirDatos();
  funpot(numero, exponente);

  return 0;
}

void pedirDatos() {

  cout << "Digite un numero: ";
  cin >> numero;

  cout << "Digite el exponente: ";
  cin >> exponente;
}

void funpot(int x, int y) {
  long resultado = 1;

  for (int i = 1; i <= y; i++) {
    resultado *= x;
  }
  cout << "El resultado es " << resultado;
}