/*EJERCICIO 2: CONSTRUYA UNA CLASE TIEMPO QUE CONTENGA
LOS SIGUIENTES ATRIBUTOS ENTEROS: HORAS, MINUTOS Y
SEGUNDOS. HAGA QUE LA CLASE CONTENGA 2 CONSTRUCTORES,
EL PRIMERO DEBE TENER TRES PARAMENTROS TIEMPO(INT,INT,INT)
Y EL SEGUNDO SOLO TENDRA UN CAMPO QUE SERAN QUE SERAN LOS
SEGUNDOS Y DESAMBLE EL NUMERO ENTERO LARGO EN HORAS,
MINUTOS Y SEGUNDOS */

#include <iostream>
using namespace std;

class Tiempo {
private:
  int horas, minutos, segundos;

public:
  Tiempo(int, int, int);
  Tiempo(long);
  void mostrarTiempo();
};

int main() {

  Tiempo hora(12, 43, 5);
  Tiempo segundos(10000);

  hora.mostrarTiempo();
  segundos.mostrarTiempo();

  return 0;
}
// horas, minutos y segundos: 15:16:3
Tiempo::Tiempo(int _horas, int _minutos, int _segundos) {
  horas = _horas;
  minutos = _minutos;
  segundos = _segundos;
}

// Segundos: 3600s
Tiempo::Tiempo(long tiempo) {
  horas = int(tiempo / 3600);
  minutos = int((tiempo % 3600) / 60);
  segundos = int((tiempo % 3600) % 60);
}
void Tiempo::mostrarTiempo() {
  cout << "La hora es: " << horas << ":" << minutos << ":" << segundos << endl;
}