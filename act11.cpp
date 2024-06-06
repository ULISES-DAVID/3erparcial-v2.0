#include <iostream>

using namespace std;

int main() {
  
  int hora;

  
  cout << "Ingrese la hora en formato de 24 horas: ";
  cin >> hora;

  
  if (hora < 0 || hora > 24) {
    cout << "Error: La hora ingresada no es válida." << endl;
    return 1;
  }

  if (hora >= 6 && hora < 12) {
    cout << "Es de mañana." << endl;
  } else if (hora >= 12 && hora < 18) {
    cout << "Es de tarde." << endl;
  } else {
    cout << "Es de noche." << endl;
  }

  return 0;
}
