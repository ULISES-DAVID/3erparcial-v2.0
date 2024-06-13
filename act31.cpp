#include <iostream>

using namespace std;


int calcularTotal(int* precios, int cantidad) {
    int total = 0;
    for (int i = 0; i < cantidad; ++i) {
        total += precios[i];
    }
    return total;
}

int main() {
    int intentos = 0;
    string contraseñaIngresada;
    char nombre[50];
    char grupo[10];

    cout << "Ingrese tu nombre: ";
    cin >> nombre;

    cout << "Ingrese tu grupo: ";
    cin >> grupo;


    while (intentos < 3) {
        cout << "Ingrese su contraseña: ";
        cin >> contraseñaIngresada;

        if (contraseñaIngresada == "2bm30") {
            cout << "Contraseña correcta. ¡Acceso concedido!" << endl;
            int compratotal = 0;
            int cantidaddelproducto;
            int i = 0;

            while (true) {
                cout << "Cuántos productos quieres agregar (puedes poner 0 para parar): ";
                cin >> cantidaddelproducto;

                if (cantidaddelproducto == 0) {
                    break;
                }

                if (i + cantidaddelproducto > 100) {
                    cout << "Lo siento, ha excedido el número de productos" << endl;
                    break;
                }

                int* preciosproductos = new int[cantidaddelproducto]; 

                for (int j = 0; j < cantidaddelproducto; ++j) {
                    cout << "Ingrese el precio del producto " << i + 1 << ": ";
                    cin >> preciosproductos[j];
                }

                compratotal += calcularTotal(preciosproductos, cantidaddelproducto);

                cout << "¿Desea agregar más productos? (S/0): ";
                char respuesta;
                cin >> respuesta;

                if (respuesta != 's') {
                    break;
                }

                delete[] preciosproductos;
            }

            cout << "Total a pagar: $" << compratotal << endl;

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
