/*Escriba una plantilla se funcion llamada despliegue() que
despliegue el valor del argumento unico que se le transmite
cuando es invocada la funcion */

#include <iostream>
using namespace std;

template <class TPD> void despliegue(TPD dato);

int main() {

  int dato1 = 34;
  double dato2 = 3.5;
  float dato3 = 2.345;
  char dato4 = 'F';

  despliegue(dato1);
  despliegue(dato2);
  despliegue(dato3);
  despliegue(dato4);

  return 0;
}

template <class TPD> void despliegue(TPD dato) { cout << dato << endl; }