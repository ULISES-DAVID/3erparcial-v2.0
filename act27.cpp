#include <iostream>

using namespace std;

int main() {
  int intentos = 0;
  string contraseñaIngresada;
  char nombre[50];

      cout << "Ingrese tu nombre\n :";
    cin >> nombre;
  
  while (intentos < 3) {
    cout << "Ingrese su contraseña: ";
    cin >> contraseñaIngresada;

    if (contraseñaIngresada == "1234") {
      cout << "Contraseña correcta. ¡Acceso concedido!" << endl;
      break;
    } else {
      cout << "Contraseña incorrecta. Intente de nuevo." << endl;
      intentos++;
    }
  }

  if (intentos == 3) {
    cout << "Lo siento, ha excedido el número máximo de intentos." << endl;
  }

  return 0;
}
