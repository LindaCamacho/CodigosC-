#include <iostream>
using namespace std; 

int main() {
    const int f = 3; 
    const int c = 3; 
    int m[f][c]; 

    cout << "Ingrese los datos de la martiz 3x3: ";
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }

    cout << "\nLa matriz ingresada es:\n";
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << ""; 
        }
        cout << endl;
    }

    cout << "\nSuma de los elementos por fila: \n";
    for (int i = 0; i < f; i++) {
        int sumaFila = 0;
        for (int j = 0; j < c; j++) {
            sumaFila += m[i][j];
        }
        cout << "Fila " << i << " :" << sumaFila << endl;
    }

    return 0; 
}