/* Escriba una funcion nombrada calc_anos() que tenga un parametro entero que
represente el numero total de dias desde la fecha  1/1/2000 y parametros de
referencia nombrados anos, mes y dias. La funcion debe calcular el ano, mes y
dia actual para el numero dado de dias que se le transmitan. Para este problema
suponga que cada ano tiene 365 dias y cada mes tiene 30 dias. */

#include <iostream>
using namespace std;

void pedirDatos();
void calc_anos(int diasACT, int &, int &, int &);

int diasACT, anios, meses, dias;

int main() {

  pedirDatos();

  calc_anos(diasACT, anios, meses, dias);

  cout << "\nAnio actual: " << anios + 2000;
  cout << "\nMes: " << meses + 1;
  cout << "\nDia: " << dias + 1;

  return 0;
}

void pedirDatos() {

  cout << "El anio actual es 1/1/2000";
  cout << "\nDigite un numero de dias para incrementar al anio actual: ";
  cin >> diasACT;
}

void calc_anos(int diasACT, int &anios, int &meses, int &dias) {

  anios = diasACT / 365;
  diasACT %= 365;
  meses = diasACT / 30;
  diasACT %= 30;
  dias = diasACT % 30;
}