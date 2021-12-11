/*Escribe un programa que le pida al usuario una cadena de numeros
enteros y otra de reales, convertirlos utilizando atoi y atof y
sumarlos */

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

  char numero_int[30];
  char numero_real[30];
  int n;
  float r;
  float suma = 0;

  cout << "Digite un numero entero: ";
  cin.getline(numero_int, 30, '\n');

  cout << "Digite un numero real: ";
  cin.getline(numero_real, 30, '\n');

  n = atoi(numero_int);
  r = atof(numero_real);
  suma = n + r;

  cout << "\n" << suma;

  return 0;
}