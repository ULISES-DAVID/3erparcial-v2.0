#include <iostream>

int main() {
  
    std::cout << "Digite el tamaño del arreglo: ";
    int n;
    std::cin >> n;

  
    int num[n];

    for (int i = 0; i < n; i++) {
        
        std::cout << "Digite un número para la posición " << i + 1 << ": ";
        int numero;
        std::cin >> numero;

       
        num[i] = numero;
    }

    
    for (int i = 0; i < n; i++) {
        std::cout << "El dato en la posición " << i + 1 << " es: " << num[i] << std::endl;
    }

    return 0;
}
