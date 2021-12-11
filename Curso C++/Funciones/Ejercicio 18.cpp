/* Escriba una funcion llamada mayor() que devuelva la fecha mas reciente de
cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten las
fechas 10/09/2005 y 11/3/2015 a mayor, sera devuelta la fecha mas reciente */

#include <iostream>
using namespace std;

struct Anio {
  int Anio;
  int mes;
  int dia;
} f1, f2;

void pedirDatos();
void mayor(Anio, Anio);

int main() {

  pedirDatos();

  mayor(f1, f2);

  return 0;
}

void pedirDatos() {
  cout << "\t\tPrimera Fecha";
  cout << "\nAnio: ";
  cin >> f1.Anio;
  cout << "Mes: ";
  cin >> f1.mes;
  cout << "Dia: ";
  cin >> f1.dia;

  cout << "\n\t\tSegunda Fecha";
  cout << "\nAnio: ";
  cin >> f2.Anio;
  cout << "Mes: ";
  cin >> f2.mes;
  cout << "Dia: ";
  cin >> f2.dia;
}

void mayor(Anio f1, Anio f2) {
  if (f1.Anio > f2.Anio) {
    cout << "La primera fecha es la mas reciente";
    return;
  } else if (f1.Anio < f2.Anio) {
    cout << "La segunda fecha es la mas reciente";
    return;
  } else if (f1.mes > f2.mes) {
    cout << "La primera fecha es la mas reciente";
    return;
  } else if (f1.mes < f2.mes) {
    cout << "La segunda fecha es la mas reciente";
    return;
  } else if (f1.dia > f2.dia) {
    cout << "La primera fecha es la mas reciente";
    return;
  } else if (f1.dia < f2.dia) {
    cout << "La segunda fecha es la mas reciente";
    return;
  } else {
    cout << "Las fechas son iguales";
  }
}
