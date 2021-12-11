// Introduccion a las cadenas de caracteres

#include <iostream>
#include <string.h>
using namespace std;

int main() {

  char palabra[] = "Diego";
  char palabra_2[] = {'D', 'i', 'e', 'g', 'o ', '\0'};
  char nombre[20];
  char nombre_2[20];
  char nombre_3[30];

  // Es equivalente copiarlo de estas maneras las palabras

  cout << endl << palabra_2 << endl;
  cout << palabra << endl;

  /* Para copiar un cin>>nombre es necesario copiarlo algo diferente, pues si se
  copia asi solo leeria una palabra. Para corregirlo, es necesario copiar una de
  las siguientes funciones:

  1.Gets: esta funcion tiene un lado negativo, consume bloques de memoria que no
  le pertenecen. La sintaxis es gets(nombre);

  2.cin.getline: consume lo necesario a diferencia del gets. La sintaxis es
  cin.getline(nombre,espacio total de elementos,cuando quieres que
  termine(\n))*/

  // cout << "\nDigite su nombre completo: ";
  // gets(nombre);

  /*El limite indicado es 20, sin embargo, a gets no le importa eso y copiara
  todo lo que copies sin importarle*/

  // cout << endl << nombre << "\n";

  // cout << "Digite su nombre completo de nuevo: ";
  // cin >> nombre_2;

  // Aca solo copiara un nombre
  // cout << endl << nombre_2 << "\n";

  cout << "\nDigite su nombre: ";
  cin.getline(nombre_3, 30, '\n');
  // // Esta es la manera correcta

  cout << endl << nombre_3;

  return 0;
}
