/* Realiza una funcion que tome como parametros un arreglo de enteros y su
tamanio e imprima un arreglo con los elementos impares del arreglo recibido
*/

#include <iostream>
using namespace std;

void pedirDatos();
void impares(int n[], int tam);

int n[100], tam;

int main() {

  pedirDatos();
  impares(n, tam);

  return 0;
}

void pedirDatos() {

  cout << "Digite el numero de elementos: ";
  cin >> tam;

  for (int i = 0; i < tam; i++) {
    cout << i + 1 << ". Digite un numero: ";
    cin >> n[i];
  }
}

void impares(int n[], int tam) {
  for (int i = 0; i < tam; i++) {
    if (n[i] % 2 != 0) {
      cout << "\nEl numero " << n[i] << " es impar";
    } else {
      cout << "\nEl numero " << n[i] << " no es impar";
    }
  }
}