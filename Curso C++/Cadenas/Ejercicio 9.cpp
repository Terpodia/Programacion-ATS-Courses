/*Escriba un programa que le pida al usuario una cadena de caracteres,
contar cada vocal digitada y copiar el resultado en pantalla */

#include <ctype.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra[100];
  int contador = 0;

  cout << "Escriba una palabra o frase: ";
  cin.getline(palabra, 30, '\n');

  for (int i = 0; i < strlen(palabra); i++) {
    palabra[i] = toupper(palabra[i]);
  }

  for (int i = 0; i < strlen(palabra); i++) {
    if (palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' ||
        palabra[i] == 'O' || palabra[i] == 'U') {
      contador++;
    }
  }
  cout << "\n"
       << "El numero de vocales digitadas es: " << contador;

  return 0;
}