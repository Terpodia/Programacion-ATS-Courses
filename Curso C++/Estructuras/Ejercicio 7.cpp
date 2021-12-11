/* Defina una estructura que indique el tiempo empleado por un
ciclista en una etapa. La estructura debe tener tres campos:
horas, minutos y segundos. Escriba un programa que dado n
etapas calcule el tiempo total empleado en correr todas las
etapas*/

#include <iostream>

using namespace std;

struct etapa {
  int horas;
  int minutos;
  int segundos;
} Tc;

int main() {

  int n;
  int ht = 0, mt = 0, st = 0;

  cout << "Digite el numero de etapas: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "\n\n\t\tTiempo empleado por el ciclista en: Etapa " << i + 1;
    cout << "\n";
    cout << "Horas: ";
    cin >> Tc.horas;
    cout << "Minutos: ";
    cin >> Tc.minutos;
    cout << "Segundos: ";
    cin >> Tc.segundos;

    ht += Tc.horas;
    mt += Tc.minutos;
    if (mt >= 60) {
      mt -= 60;
      ht++;
    }
    st += Tc.segundos;
    if (st >= 60) {
      st -= 60;
      mt++;
    }
  }

  cout << "\n\tEl tiempo empleado por el ciclista fue de: ";
  cout << "\n";
  cout << "\n" << mt << " minutos";
  cout << "\n" << st << " segundos";

  return 0;
}