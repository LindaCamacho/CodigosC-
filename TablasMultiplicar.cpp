#include <iostream>

int main() {
    int n, r, t;

    std::cout << "Ingresa la tabla de multiplicar que deseas visualizar --> ";
    std::cin >> n; 
    
    std::cout << "¿Hasta qué número se va a multiplicar? ";
    std::cin >> t; 

    for (int i = 1; i <= t; i++) {
        r = n * i; 
        std::cout << n << " * " << i << " = " << r << std::endl; 
    }

    return 0;
}
