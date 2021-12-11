/* Hacer un arreglo de estructura llamada atleta para N atletas que contenga
los siguientes campos: nombre, pais, numero_medallas. Y devuelva los datos
(nombre,pais) del atleta que ha ganado el mayor numero de medallas */

#include <iostream>

using namespace std;

struct Attleta {

  char nombre[20];
  char pais[30];
  int medallas;

} attl[100];

int main() {

  int n, posM, posm;
  int mayor = 0;

  cout << "Digite el numero de attletas: ";
  cin >> n;
  cout << "\n";

  for (int i = 0; i < n; i++) {

    cin.ignore();
    cout << "\t\tAttleta " << i + 1;
    cout << "\n";
    cout << "Nombre: ";
    cin.getline(attl[i].nombre, 20, '\n');
    cout << "Pais: ";
    cin.getline(attl[i].pais, 30, '\n');
    cout << "Medallas: ";
    cin >> attl[i].medallas;
    cout << "\n";

    if (attl[i].medallas > mayor) {
      mayor = attl[i].medallas;
      posM = i;
    }
  }

  cin.ignore();
  cout << "\t\tAttleta con mas medallas";
  cout << "\nNombre: " << attl[posM].nombre;
  cout << "\nPais: " << attl[posM].pais;

  return 0;
}