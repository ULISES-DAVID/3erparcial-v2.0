#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>

using namespace std;

#define PI 3.1416
#define COLOR_DEFAULT 8
#define COLOR_SELECTION 10
#define COLOR_MENU 1
#define COLOR_RESULTS 20

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void limpiarPantalla() {
    system("cls");
}

int main() {
    int opcion = 0;
    bool salir = false;

    while (!salir) {
        limpiarPantalla();
        setColor(COLOR_MENU);
        cout << "*******************************" << endl;
        cout << "*       Area de Figuras       *" << endl;
        cout << "*******************************" << endl;

        setColor(COLOR_DEFAULT);
        cout << "\nElige una figura para calcular su area:" << endl;
        cout << "1. Triangulo" << endl;
        cout << "2. Cuadrado" << endl;
        cout << "3. Rectangulo" << endl;
        cout << "4. Circulo" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                setColor(COLOR_SELECTION);
                float base, altura;
                cout << "\nBase del triangulo: ";
                cin >> base;
                cout << "Altura del triangulo: ";
                cin >> altura;
                float area = (base * altura) / 2;
                setColor(COLOR_RESULTS);
                cout << "El area del triangulo es: " << area << endl;
                break;
            }
            case 2: {
                setColor(COLOR_SELECTION);
                float lado;
                cout << "\nLado del cuadrado: ";
                cin >> lado;
                float area = lado * lado;
                setColor(COLOR_RESULTS);
                cout << "El area del cuadrado es: " << area << endl;
                break;
            }
            case 3: {
                setColor(COLOR_SELECTION);
                float largo, ancho;
                cout << "\nLargo del rectangulo: ";
                cin >> largo;
                cout << "Ancho del rectangulo: ";
                cin >> ancho;
                float area = largo * ancho;
                setColor(COLOR_RESULTS);
                cout << "El area del rectangulo es: " << area << endl;
                break;
            }
            case 4: {
                setColor(COLOR_SELECTION);
                float radio;
                cout << "\nRadio del circulo: ";
                cin >> radio;
                float area = PI * pow(radio, 2);
                setColor(COLOR_RESULTS);
                cout << "El area del circulo es: " << area << endl;
                break;
            }
            case 5: {
                salir = true;
                break;
            }
            default: {
                setColor(COLOR_DEFAULT);
                cout << "Opcion no valida." << endl;
                break;
            }
        }
        setColor(COLOR_DEFAULT);
        if (!salir) {
            cout << "\nPresiona cualquier tecla para continuar...";
            _getch();
        }
    }

    return 0;
}
