#include <iostream>

int multi(int x, int y) {
    return x * y; 
}

int main() {
    int n1, n2; 

        std::cout << "Ingrese el primer número: ";
    std:: cin >> n1;

    std::cout << "Ingrese el segundo número: ";
    std:: cin >> n2; 

    //Llamar a la función

    std:: cout << "La multiplicación es: " <<multi(n1, n2) << std::endl;

    return 0; 
} 