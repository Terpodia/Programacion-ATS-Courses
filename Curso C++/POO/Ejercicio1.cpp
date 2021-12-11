// EJERCICIO 1: CONSTRUYA UNA CLASE RECT QUE TENGA LOS ATRIBUTOS ANCHO
// Y LARGO Y QUE TENGA LOS METODOS AREA Y PERIMETRO

#include <iostream>
using namespace std;

class Rect {
private:
  float ancho;
  float largo;

public:
  Rect(float, float);
  void area();
  void perimetro();
};

int main() {
  Rect r1(22.3, 30.2);
  r1.area();
  r1.perimetro();

  return 0;
}

Rect::Rect(float _ancho, float _largo) {
  ancho = _ancho;
  largo = _largo;
}

void Rect::area() {
  float area;
  area = ancho * largo;

  cout << "El area es " << area << endl;
}

void Rect::perimetro() {
  float perimetro;
  perimetro = (ancho * 2) + (largo * 2);

  cout << "El perimetro es " << perimetro << endl;
}