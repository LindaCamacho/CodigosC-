#include <iostream>

int main() {
    int n; 

    std::cout << "Ingrese su edad --> ";
    std::cin >> n; 

    if (n <= 2) {
        std::cout << "¿Eres un bebé con acceso a internet?";
    } else if (n > 2 && n <= 5) {
        std::cout << "Eres un niño pequeño.";
    } else if (n > 5 && n <= 12) {
        std::cout << "Sigues siendo un niño.";
    } else if (n > 12 && n <= 18) {
        std::cout << "Eres un adolescente.";
    } else if (n > 18 && n <= 30) {
        std::cout << "Eres un adulto joven.";
    } else if (n > 30 && n <= 65) {
        std::cout << "Eres un adulto.";
    } else if (n > 65 && n <= 100) {
        std::cout << "Eres una persona mayor.";
    } else {
        std::cout << "Eres un fósil :D";
    }

    return 0;
}
