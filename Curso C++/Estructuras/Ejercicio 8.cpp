/* Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos: el nombre de la persona y
un valor de tipo logico(bool)que indica si la persona tiene algun
tipo de discapacidad. Realice un programa que dado un vector de
personas rellene dos nuevos vectores: uno que contenga las personas
que no tienen ninguna discapacidad y otro que contenga las personas
con discapacidad
 */

#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

struct Persona {
  string nombre;
  bool discapacidad;
} persona[100], persona_t1[100], persona_t2[100];

int main() {
  int n;

  cout << "Digite un numero de personas: ";
  cin >> n;

  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    persona[i].nombre = "Agente";
    if (rand() % 10 + 1 < 8) {
      persona[i].discapacidad = false;
      cout << persona[i].nombre << i + 1 << ". No tiene discapacidad";
    }

    else {
      persona[i].discapacidad = true;
      cout << persona[i].nombre << i + 1 << ". Tiene discapacidad";
    }
    cout << "\n";
  }

  for (int i = 0; i < n; i++) {
    if (persona[i].discapacidad == false) {
      persona_t1[i] = persona[i];
    } else {
      persona_t2[i] = persona[i];
    }
  }

  return 0;
}