#include <iostream>
#include <string.h>
using namespace std;

int main() {

  string palabra;

  cin >> palabra;
  reverse(palabra.begin(), palabra.end());

  cout << palabra;

  return 0;
}