#include <iostream>
using namespace std; 

int main() {
    const int FILAS = 3;
    const int COLUMNAS = 3; 
    int matriz[FILAS][COLUMNAS];

    //Ingresar datos 
    cout << "Ingrese los valores de la matriz de 3x3: \n";
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    //Mostrar matriz 
    cout << "\nLa matriz ingresada es: \n ";
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << ""; 
        }
        cout << endl; 
    }
    return 0; 
 }