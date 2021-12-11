// Paso de Parametros por Referencia.

#include <iostream>
using namespace std;

void valNuevo(int &, int &);

int main() {

  int n1 = 7;
  int n2 = 10;

  valNuevo(n1, n2);

  cout << "El nuevo valor del primer numero es " << n1 << endl;
  cout << "El nuevo valor del segundo numero es " << n2 << endl;

  return 0;
}

void valNuevo(int &xnum, int &ynum) {

  cout << "El valor del primer numero es: " << xnum << endl;
  cout << "El valor del segundo numero es: " << ynum << endl;

  xnum = 89;
  ynum = 45;
}
