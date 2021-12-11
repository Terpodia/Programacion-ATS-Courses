/* Suma de numeros complejos

z1 = 5 - 3i, z2 = -4 + 2i;
z1 + z2 = ((5-3i) + (-4 + 2i))
        = 5 - 3i -4 + 2i
        = 1 - i
*/

#include <iostream>
using namespace std;

struct Complejo {
  float real, imaginario;
} z1, z2;

void pedirDatos();
void suma(Complejo, Complejo);

int main() {

  pedirDatos();
  suma(z1, z2);

  return 0;
}

void pedirDatos() {
  cout << "\t\tPrimer numero Complejo";
  cout << "\nDigite la parte real: ";
  cin >> z1.real;
  cout << "Digite la parte imaginaria: ";
  cin >> z1.imaginario;

  cout << "\n\t\tSegundo numero complejo";
  cout << "\nDigite la parte real: ";
  cin >> z2.real;
  cout << "Digite la parte imaginaria: ";
  cin >> z2.imaginario;
}

void suma(Complejo z1, Complejo z2) {
  z1.real += z2.real;
  z1.imaginario += z2.imaginario;
  cout << "La suma de los numeros es: " << z1.real << " " << z1.imaginario;
}