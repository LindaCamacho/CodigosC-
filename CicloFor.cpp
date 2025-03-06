#include <iostream>

int main () {
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteración ..." << i << std::endl;
    }

    //Recorrer Arrays 
    int numeros[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento: " << i << ": " << numeros[i] << std::endl; 
    }
}