// Pedirle al usuario que digite un arreglo

#include <iostream>
#include <string>
using namespace std;

int main() {

  string palabras[100];
  int n;

  cout << "Digite el numero de elementos de su arreglo: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << i << " Digite una palabra: ";
    cin >> palabras[i];
  }

  for (int i = 0; i < n; i++) {
    cout << i << " -> " << palabras[i] << endl;
  }

  return 0;
}