/* Realice una funcion recursiva para la serie Fibonacci.
NOTA: La serie de Fibonacci esta formada por la secuencia de numeros:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
*/

#include <iostream>
using namespace std;

int Fibonacci(int x);

int main() {
  int num;

  cout << "Digite un numero: ";
  cin >> num;

  cout << "\nEl numero en la Serie Fibonacci es: " << Fibonacci(num);

  return 0;
}

int Fibonacci(int x) {

  if (x == 0) {
    fib = 0;
  } else if (x == 1) {
    fib = 1;
  } else {
    return Fibonacci(x - 1) + Fibonacci(x - 2);

    return fib;
  }
}