// Sobrecarga de constructores

#include <iostream>
using namespace std;

class Fecha {
private:
  int dia, mes, anio;

public:
  Fecha(int, int, int);
  Fecha(long);
  void mostrarFecha();
};

int main() {
  Fecha hoy(9, 1, 2017);
  Fecha ayer(20170108);

  hoy.mostrarFecha();
  ayer.mostrarFecha();

  return 0;
}

Fecha::Fecha(int _dia, int _mes, int _anio) {
  anio = _anio;
  mes = _mes;
  dia = _dia;
}

void Fecha::mostrarFecha() {
  cout << "La fecha es: " << dia << "/" << mes << "/" << anio << endl;
}

Fecha::Fecha(long _fecha) {
  anio = int(_fecha / 1000 0);
  mes = int((_fecha - anio * 10000) / 100);
  dia = int(_fecha - anio * 10000 - mes * 100);
}