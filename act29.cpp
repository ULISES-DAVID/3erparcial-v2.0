#include <iostream>
#include <cstring> 

using namespace std;

int main() {
  char password[] = {'2', 'b', 'm', '3', '0', '\0'};
  char inputPassword[20];
  char name[50];
  char grupo[10];
  int remainingAttempts = 3;
  int precio;
  int totalSum = 0;

  cout << "Hola, ¿cómo te llamas? ";
  cin.getline(name, 50); 

  cout << "Ingresa tu salon ";
  cin.getline(grupo, 10);

  int i = 0;
  while (i < 3) {
    cout << "Ingresa tu contraseña (te quedan " << 3 - i << " intentos): ";
    cin.getline(inputPassword, 20);

    int j = 0;
    bool match = true;
    while (password[j] != '\0' && inputPassword[j] != '\0') {
      if (password[j] != inputPassword[j]) {
        match = false;
        break;
      }
      j++;
    }

    if (match && password[j] == '\0' && inputPassword[j] == '\0') {
      cout << "¡Contraseña correcta, " << name << "! ¿Cuántas facturas tienes? ";
      int numFacturas;
      cin >> numFacturas;

      if (numFacturas > 0) {
        cout << "El número ingresado es positivo" << endl;
      } else {
        cout << "El número no es positivo" << endl;
      }

      cout << "Ingrese el precio de la factura: ";
      cin >> precio;

      for (int k = 0; k < numFacturas; k++) {
        cout << "La factura número " << k + 1 << " tiene un valor de " << precio << endl;
        totalSum += precio;
      }

      cout << "El total es de " << totalSum << endl;
      break;
    } else {
      cout << "Contraseña incorrecta. Prueba de nuevo." << endl;
      i++;
    }
  }

  if (i == 3) {
    cout << "Demasiados intentos. Intenta más tarde." << endl;
  }

  return 0;
}
