#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; 

    cout << "Digite el número de posiciones: ";
    cin >> n;

    string personas[n]; 

    for (int i = 0; i < n; i++) {
        
        cout << "Digite un nombre para la posición " << i << ": ";
        string nombre; 
        cin >> nombre;
        personas[i] = nombre; 
    }

    for (int i = 0; i < n; i++) {
        cout << "El dato en la posición " << i << " es: " << personas[i] << endl;
    }

    return 0;
}
