// Pasar string a char

#include <ctype.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {

  string a = "Hola";
  char b[a.length() + 1];

  strcpy(b, a.c_str());

  cout << b;

  return 0;
}