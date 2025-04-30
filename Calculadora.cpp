#include <iostream>
#include <iomanip>
#include <limits>
#include "operaciones.h"
using namespace std; 

// Limpiar buffer
void limpiar() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Menú
void mostrarMenu(){
    cout << "\n========== CALCULADORA CIENTÍFICA ==========\n";
    cout << "1) Suma\n";
    cout << "2) Resta\n";
    cout << "3) Multiplicación\n";
    cout << "4) División\n";
    cout << "5) Potencia (x^y)\n";
    cout << "6) Raíz cuadrada\n";
    cout << "7) Módulo (resto decimal)\n";
    cout << "8) Porcentaje\n";
    cout << "9) Salir\n";
    cout << "============================================\n";
    cout << "Seleccione una opción --> ";
}

int main() {
    int opcion; 
    double n1, n2, resultado; 

    cout << fixed << setprecision(2); // Mostrar 2 decimales

    while (true) {
        mostrarMenu(); 
        cin >> opcion; 

        if (cin.fail()) {
            limpiar(); 
            cout << "Entrada inválida. Intente de nuevo.\n";
            continue;
        }

        if (opcion == 9) {
            cout << "\n¡Gracias por usar la calculadora!" << endl;
            break;
        }

        // Validar opción
        if (opcion < 1 || opcion > 9) {
            cout << "Opción no válida." << endl;
            continue;
        }

        cout << "Ingrese el primer número --> ";
        cin >> n1;
        if (cin.fail()) {
            limpiar();
            cout << "Entrada inválida." << endl;
            continue;
        }

        // Estas operaciones requieren dos números
        bool requiereSegundoNumero = (opcion != 6); // Raíz usa solo uno

        if (requiereSegundoNumero) {
            cout << "Ingrese el segundo número --> ";
            cin >> n2;
            if (cin.fail()) {
                limpiar();
                cout << "Entrada inválida." << endl;
                continue;
            }
        }

        switch (opcion) {
            case 1:
                resultado = suma(n1, n2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                resultado = resta(n1, n2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado = multiplicar(n1, n2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                if (n2 != 0) {
                    resultado = division(n1, n2);
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "ERROR: No se puede dividir por cero." << endl;
                }
                break;
            case 5:
                resultado = potencia(n1, n2);
                cout << n1 << " ^ " << n2 << " = " << resultado << endl;
                break;
            case 6:
                if (n1 >= 0) {
                    resultado = raiz(n1);
                    cout << "Raíz cuadrada: " << resultado << endl;
                } else {
                    cout << "ERROR: No se puede calcular raíz de número negativo." << endl;
                }
                break;
            case 7:
                if (n2 != 0) {
                    resultado = modulo(n1, n2);
                    cout << "Módulo: " << resultado << endl;
                } else {
                    cout << "ERROR: No se puede calcular módulo con divisor cero." << endl;
                }
                break;
            case 8:
                resultado = porcentaje(n1, n2);
                cout << n2 << "% de " << n1 << " = " << resultado << endl;
                break;
        }
    }

    return 0;
}
