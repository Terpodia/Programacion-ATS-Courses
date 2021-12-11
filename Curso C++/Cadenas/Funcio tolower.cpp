// Funcion tolower. Mayusculas a minusculas

#include <ctype.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra[] = "FRIEND";

  cout << palabra;

  for (int i = 0; i < strlen(palabra); i++) {
    palabra[i] = tolower(palabra[i]);
  }

  cout << endl << palabra;

  return 0;
}