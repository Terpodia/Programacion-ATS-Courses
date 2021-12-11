/* Realice una funcion recursiva que sume los primeros n enteros positivos
NOTA: para plantear la funcion recursiva tenga en cuenta que la suma
puede expresarse mediante la siguiente recurrencia:

    suma(n) = 1 					, si n = 1
                n + suma(n-1) 		, si n > 1
*/

#include <iostream>
using namespace std;

int sumar(int x);

int main() {

  int num;

  do {
    cout << "Digite un numero: ";
    cin >> num;
  } while (num <= 0);

  cout << "La suma de los primeros " << num
       << " numeros enteros positivos es: " << sumar(num);

  return 0;
}

int sumar(int x) {
  int suma = 0;

  if (x == 1) {
    suma = 1;
  } else {
    suma = x + sumar(x - 1);
  }

  return suma;
}