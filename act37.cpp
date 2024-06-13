#include <iostream>
#include <vector>

int main() {
   
    std::cout << "Digite el tamaño del vector 1: ";
    int t;
    std::cin >> t;
    std::vector<int> vector1(t);

    for (int i = 0; i < t; i++) {
        std::cout << "Ingrese el elemento " << i + 1 << ": ";
        int num;
        std::cin >> num;
        vector1[i] = num;
    }

 
    std::cout << "Digite el tamaño del vector 2: ";
    int s;
    std::cin >> s;
    std::vector<int> vector2(s);

 
    for (int i = 0; i < s; i++) {
        std::cout << "Ingrese el elemento " << i + 1 << ": ";
        int num;
        std::cin >> num;
        vector2[i] = num;
    }

    
    std::vector<int> vector3(t + s);

    
    for (int i = 0; i < t; i++) {
        vector3[i] = vector1[i];
    }

    for (int i = 0; i < s; i++) {
        vector3[t + i] = vector2[i];
    }


    std::cout << "Resultado final: ";
    for (int i = 0; i < t + s; i++) {
        std::cout << vector3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
