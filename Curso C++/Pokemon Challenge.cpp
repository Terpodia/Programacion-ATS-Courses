// Pokemon Challenge

#include <iostream>
#include <string>
using namespace std;

int main() {
  string pokemonP1, pokemonP2;
  int numero, n2, opc, lifeP1 = 100, lifeP2 = 100, damageP1 = 30, damageP2 = 30;
  cout << "\t\tBienvenido al mundo Pokemon";
  cout << "\nCual pokemon quieres: " << endl;
  cout << "\n 1. Charmander";
  cout << "\n 2. Bulbasaur";
  cout << "\n 3. Squirtle";

  cout << "\nElijo al numero : ";
  cin >> numero;

  switch (numero) {
  case 1:
    pokemonP1 = "Charmander";
    pokemonP2 = "Squirtle";
    cout << "Haz elegido a Charmander, el pokemon de fuego" << endl;
    break;
  case 2:
    pokemonP1 = "Bulbasaur";
    pokemonP2 = "Charmander";
    cout << "Haz elegido a Bulbasaur, el pokemon de planta" << endl;
    break;
  default:
    pokemonP1 = "Squirtle";
    pokemonP2 = "Bulbasaur";
    cout << "Haz elegido a Squirtle, el pokemon de agua" << endl;
    break;
  }

  cout << "\nHola abuelo" << endl;
  cout << "\nQuien es este chico?";
  cout << "\nHola Gary, este es fulano, acaba de recibir su primer Pokemon";
  cout << "\nah si?, entonces fulano, que tal si peleamos";
  cout << "\n"
       << "\tESTAS PELEANDO" << endl;

  cout << "\nGary saca a " << pokemonP2 << endl;
  cout << "Tu envias a " << pokemonP1 << endl;

  do {
    cout << "\nQue quieres hacer?" << endl;
    cout << "Si ya termino la pelea, presiona 0, si no, 1 para continuar: "
         << endl;
    cin >> n2;
    if (n2 == 0) {
      cout << "Fin de la Beta" << endl;
      break;
    }
    cout << "Okay, que quieres hacer: " << endl;
    cout << "1. Placaje" << endl;
    cout << "2. Encanto" << endl;
    cout << "Elijo: " << endl;
    cin >> opc;
    if (opc == 1) {
      cout << "Haz usado Placaje" << endl;
      lifeP2 -= damageP1;
      cout << "A " << pokemonP2 << " le quedan " << lifeP2 << "HP" << endl;
      cout << pokemonP2 << " usa Placaje" << endl;
      lifeP1 -= damageP2;
      cout << "A " << pokemonP1 << " le quedan " << lifeP1 << " HP" << endl;
    } else {
      cout << "Haz usado Encanto" << endl;

      damageP2 -= 10;

      cout << "A disminuido el ataque de " << pokemonP2 << endl;
      cout << pokemonP2 << " usa Placaje" << endl;
      lifeP1 -= damageP2;
      cout << "A " << pokemonP1 << " le quedan " << lifeP1 << " HP " << endl;
    }
  } while (n2 == 1);

  cout << "Hasta luego amiwitos" << endl;

  return 0;
}
