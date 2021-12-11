/*Escriba 2 arreglos de numeros y contengalos en un arreglo, en donde, al
pasarlos a este se multiplique por 2 los componentes, muestre el resultado en
pantalla*/

#include <iostream>
using namespace std;

int main() {

  int numeros1[100];
  int numeros2[100];
  int numeros3[100];
  int n1, n2;
  int i = 0;

  // Digitando primer arreglo
  cout << "Digite el numero de elementos de su primer arreglo: ";
  cin >> n1;

  for (i = 0; i < n1; i++) {
    cout << i + 1 << ". Digite un numero: ";
    cin >> numeros1[i];
  }

  // Digitando su segundo arreglo
  cout << "Digite el numero de elementos de su segundo arreglo: ";
  cin >> n2;

  for (i = 0; i < n2; i++) {
    cout << i + 1 << ". Digite un numero: ";
    cin >> numeros2[i];
  }
  // Almacenando los datos en numeros[3]
  for (i = 0; i < n1; i++) {
    numeros3[i] = numeros1[i] * 2;
  }

  for (i = 0; i < n2; i++) {
    numeros3[i + n1] = numeros2[i] * 2;
  }
  // Mostrando el resultado en pantalla
  cout << "El resultado de la multiplicacion por dos de los elementos de los "
          "arreglos que digitaste es: ";
  for (int i = 0; i < n1 + n2; i++) {

    cout << endl << i << " -> " << numeros3[i] << endl;
  }

  return 0;
}