#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

  string pk;

  cout << "Escriba un pokemon: ";
  cin >> pk;

  switch (pk)

  case "charmander":
    cout << "Haz eligido";
  break;
case default:
  cout << "pendejo";
  break;

  return 0;
}