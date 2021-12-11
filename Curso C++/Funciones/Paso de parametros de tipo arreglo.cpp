/* Paso de parametros de tipo arreglo

Parametros de la funcion:
    void nombre(tipo nombreArreglo[], tamano arreglo)

Llamada a la funcion
    nombre(nombreArreglo, tamano del arreglo)

*/

// Cuadrados de los elementos del arreglo

#include <iostream>
using namespace std;

void Cuadrados(int n[], int tam);
void mostrarDatos(int n[], int tam);

int main() {

  const int tam = 5;

  int n[tam] = {1, 2, 3, 4, 5};

  Cuadrados(n, tam);
  mostrarDatos(n, tam);

  return 0;
}

void Cuadrados(int n[], int tam) {

  for (int i = 0; i < tam; i++) {
    n[i] *= n[i];
  }
}

void mostrarDatos(int n[], int tam) {

  for (int i = 0; i < tam; i++) {
    cout << "\n" << n[i];
  }
}