/* Escriba un programa que convierta dos cadenas a mayusculas, comparelas y diga
si son iguales o no */

#include <ctype.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra1[30];
  char palabra2[30];

  cout << "Digite una palabra: ";
  cin.getline(palabra1, 30, '\n');

  cout << "\nDigite otra palabra: ";
  cin.getline(palabra2, 30, '\n');

  for (int i = 0; i < strlen(palabra1); i++) {
    palabra1[i] = toupper(palabra1[i]);
  }

  for (int i = 0; i < strlen(palabra2); i++) {
    palabra2[i] = toupper(palabra2[i]);
  }

  if (strcmp(palabra1, palabra2) == 0) {
    cout << "Las palabras " << palabra1 << " y " << palabra2 << " son iguales";
  }

  else {
    cout << "Las palabras " << palabra1 << " y " << palabra2
         << " no son iguales";
  }

  return 0;
}