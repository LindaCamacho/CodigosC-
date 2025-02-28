#include <iostream>

//Función para la suma de dos números 

int sumar(int y, int x){
    return x + y; 
}

int main() {
    int n1, n2; 

    std::cout << "Ingrese el primer número: ";
    std:: cin >> n1;

    std::cout << "Ingrese el segundo número: ";
    std:: cin >> n2; 

    //Llamar a la función

    std:: cout << "La suma es: " <<sumar(n1, n2) << std::endl;

    return 0; 
}