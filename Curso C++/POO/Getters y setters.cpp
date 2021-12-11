// Metodos constructores y modificadores
//(Getters y Setters)

#include <iostream>
using namespace std;

class Punto {
private:
  int x, y;

public:
  Punto();
  ~Punto();
  void setPunto(int, int); // Setter.
  int getPuntoX();         // Getter.
  int getPuntoY();         // Getter.
};

int main() {
  Punto p1;
  p1.setPunto(15, 10);
  cout << p1.getPuntoX() << endl;
  cout << p1.getPuntoY() << endl;

  return 0;
}

Punto::Punto() {}

Punto::~Punto() {}

// Establecemos valores a los atributos.
void Punto::setPunto(int _x, int _y) {
  x = _x;
  y = _y;
}

int Punto::getPuntoX() { return x; }

int Punto::getPuntoY() { return y; }