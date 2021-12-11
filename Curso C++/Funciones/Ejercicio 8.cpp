/* Escriba una funcion nombrada cambio() que tenga un parametro en
numero entero y seis parametros de referencia en numeros enteros
nombrados cin,cincuenta,veinte,diez,cinco y uno, respectivamente.
La funcion tiene que considerar el valor entero transmitido como
una cantidad en dolares y convertir el valor en el numero menor
de billetes equivalentes */

#include <iostream>
using namespace std;

void cambio(int num, int &, int &, int &, int &, int &, int &);
void pedirNum();
int num;

int main() {

  int cien, cincuenta, veinte, diez, cinco, uno;

  pedirNum();

  cambio(num, cien, cincuenta, veinte, diez, cinco, uno);

  cout << "\t\tPara pagar se han utilizado:";
  cout << "\nBilletes de cien: " << cien;
  cout << "\nBilletes de cincuenta: " << cincuenta;
  cout << "\nBilletes de veinte: " << veinte;
  cout << "\nBilletes de diez: " << diez;
  cout << "\nBilletes de cinco: " << cinco;
  cout << "\nBilletes de uno: " << uno;

  return 0;
}

void pedirNum() {

  cout << "Digite un numero: ";
  cin >> num;
}

void cambio(int num, int &cien, int &cincuenta, int &veinte, int &diez,
            int &cinco, int &uno) {

  cien = 0;
  cincuenta = 0;
  veinte = 0;
  diez = 0;
  cinco = 0;
  uno = 0;

  cien = num / 100;
  num %= 100;
  cincuenta = num / 50;
  num %= 50;
  veinte = num / 20;
  num %= 20;
  diez = num / 10;
  num %= 10;
  cinco = num / 5;
  num %= 5;
  uno = num / 1;
  num %= 1;
}