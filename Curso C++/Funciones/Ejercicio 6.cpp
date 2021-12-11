/* Escriba una plantilla de funcion llamada maximo() que
devuelva el valor maximo de 3 argumentos que se transmitan
a la funcion cuando sea llamada. Suponga que los 3 argumentos
seran del mismo tipo de dato */

#include <iostream>
using namespace std;

template <class TPD> TPD maximo(TPD x, TPD y, TPD z);

int main() {

  char dato1 = 'a';
  char dato2 = 'b';
  char dato3 = 'c';

  cout << "El mayor es " << maximo(dato1, dato2, dato3);

  return 0;
}

template <class TPD> TPD maximo(TPD x, TPD y, TPD z) {

  if (x > y && x > z) {
    return x;
    .
  } else if (y > x && y > z) {
    return y;
  } else {
    return z;
  }
}
