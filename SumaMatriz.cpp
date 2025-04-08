#include <iostream>
using namespace std; 

int main() {
    const int f = 3; 
    const int c = 3; 
    int m[f][c]; 
    int s = 0;

    cout << "Ingrese los datos de la matriz 3x3: ";
    for (int i = 0; i < f; i++){
        for (int j = 0; j < c; j++){
            cout << "Elemento [" << i << "][" << j << "] -->";
            cin >> m[i][j];
            s += m[i][j]; 
        }
    }

    cout << "\nLa matriz ingresada es: \n";
    for (int i = 0; i < f; i++){
        for (int j = 0; j < c; j++){
            cout << m[i][j];
        }
        cout << endl;
    }

    cout << "\nLa suma de todos los elementos es: " << s << endl;
    return 0; 

}