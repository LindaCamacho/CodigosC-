#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// FUNCIONES operaciones
double suma(double a, double b) {
    return a + b; 
}

double resta(double a, double b) {
    return a - b; 
}

double multiplicar(double a, double b) {
    return a * b; 
}

double division(double a, double b) {
    return b != 0 ? a / b : NAN; 
}

// FUNCION limpiar buffer 
void limpiar() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta entradas no válidas
}

int main() {
    double n1, n2, r;
    int choice;
    char continuar = 's'; 

    while (continuar == 's' || continuar == 'S') {
        // Menú de operaciones 
        cout << "\nCALCULADORA" << endl;
        cout << "Selecciona una operación: " << endl;
        cout << "1) Suma" << endl;
        cout << "2) Resta" << endl;
        cout << "3) Multiplicación" << endl;
        cout << "4) División" << endl;
        cout << "Ingrese su opción --> ";
        cin >> choice;

        if (cin.fail()) {
            limpiar(); 
            cout << "Opción inválida. Intente de nuevo." << endl;
            continue;
        }

        cout << "Ingrese el primer número --> "; 
        cin >> n1; 
        if(cin.fail()) {
            limpiar();
            cout << "Entrada inválida. Intente de nuevo." << endl;
            continue; 
        }

        cout << "Ingrese el segundo número --> "; 
        cin >> n2; 
        if(cin.fail()) {
            limpiar();
            cout << "Entrada inválida. Intente de nuevo." << endl;
            continue; 
        }

        // OPERACIONES CON SWITCH
        switch(choice) {
            case 1:
                r = suma(n1, n2); 
                cout << "Suma --> " << r << endl;
                break;

            case 2: 
                r = resta(n1, n2); 
                cout << "Resta --> " << r << endl; 
                break;
            
            case 3: 
                r = multiplicar(n1, n2); 
                cout << "Multiplicación --> " << r << endl; 
                break; 

            case 4: 
                if (n2 != 0) {
                    r = division(n1, n2); 
                    cout << "División --> " << r << endl; 
                } else {
                    cout << "Error: no se puede dividir por 0" << endl; 
                }
                break;

            default:
                cout << "Opción no válida." << endl;
        }

        // Preguntar si desea continuar
        do {
            cout << "\n¿Desea realizar otra operación? (s/n): ";
            cin >> continuar; 
            continuar = tolower(continuar); 
        } while (continuar != 's' && continuar != 'n');
    }

    cout << "\n¡Gracias por usar la calculadora!" << endl;
    return 0;
}
