// Funcion toupper

#include <ctype.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char palabra[] = "Esta es mi palabra";
  cout << palabra << endl;

  for (int i = 0; i < strlen(palabra); i++) {
    palabra[i] = toupper(palabra[i]);
  }

  cout << palabra << endl;

  return 0;
}
