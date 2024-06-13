#include <iostream>
#include <vector>

int main() {
  int tam; 
  std::cout << "Ingrese el tamaño del vector: ";
  std::cin >> tam;

  std::vector<int> vector(tam); 

  for (int i = 0; i < tam; i++) {
    std::cout << "Ingrese el elemento " << i + 1 << ": ";
    std::cin >> vector[i];
  }

  int positivos = 0; 

  for (int i = 0; i < tam; i++) {
    if (vector[i] > 0) {
      positivos++;
    }
  }

  std::cout << "La cantidad de números positivos es: " << positivos << std::endl;

  return 0;
}
