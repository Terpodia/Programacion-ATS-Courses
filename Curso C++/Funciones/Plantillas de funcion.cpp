/*Plantillas de funcion
Sacar el valor absoluto de un numero
*/

#include <iostream>

using namespace std;

// Prototipo de funcion
template <class TPOD> void valorABS(TPOD numero);

int main() {

  int n1 = -8;
  double n2 = 3.5;
  float n3 = -3.8745;

  valorABS(n1);
  valorABS(n2);
  valorABS(n3);

  return 0;
}

template <class TPOD> void valorABS(TPOD numero) {
  if (numero < 0) {
    numero *= -1;
  }
  cout << "El valor absoluto del numero es: " << numero << endl;
}
