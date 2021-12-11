#include <iostream>
#include <string.h>

using namespace std;

int main() {

  char palabra1[20], palabra2[20];

  cin >> palabra1 >> palabra2;

  if (strcmp(palabra1, palabra2) == 0) {
    cout << "Las cadenas son iguales";
  }
  // if (strcmp(palabra1,palabra2)==1)
  //{
  // cout << "\nLas cadenas son diferentes";
  //}
  else if (strcmp(palabra1, palabra2) < 0) {
    cout << "\nLa primera cadena es mayor";
  }

  else if (strcmp(palabra2, palabra1) < 0) {
    cout << "\nLa segunda cadena es mayor";
  }

  return 0;
}