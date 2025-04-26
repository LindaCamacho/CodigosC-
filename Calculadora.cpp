#include <iostream>
using namespace std; 

int main() {
    //Declaración de varianles
    double n1, n2, r; 
    int choice; 

    //Menú de operaciones 
    cout <<"CALCULADORA" << endl;
    cout <<"Selecciona una operación: " << endl;
    cout <<"1) Suma" << endl;
    cout <<"2) Resta" << endl;
    cout <<"3) Multiplicación" << endl; 
    cout <<"4) División" << endl;
    cout <<"Ingrese su opción --> " << endl;
    cin >> choice; 

    //Ingreso de números 
    cout << "Ingrese el primer número: "; 
    cin >> n1; 
    cout << "Ingrese el segundo número: ";
    cin >> n2; 

    //Realizar la operación elegida
    if (choice == 1) {
        r = n1 + n2; 
        cout << "El resultado de la suma es --> " << r << endl;
    } else if (choice == 2) {
        r = n1 - n2; 
        cout << "El resultado de la resta es -->" << r << endl;
    } else if (choice == 3) {
        r = n1 * n2; 
        cout << "El resultado de la multiplicación es -->" << r << endl; 
    } else if (choice == 4) {
        if(n2 != 0) {
            r = n1 / n2; 
            cout << "El resultado de la división es -->" << r << endl;
        } else {
            cout << "ERROR: No se puede dividir por 0." << endl; 
        }
    } else {
        cout << "Opción no válida" << endl; 
    }
}