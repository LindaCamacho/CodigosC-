#include <iostream>
using namespace std;

int main() {
    int filas, columnas;

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    int A[100][100], B[100][100], C[100][100]; // Máximo 100x100

    // Ingreso de la matriz A
    cout << "\nIngrese los elementos de la matriz A:\n";
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < columnas; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

    // Ingreso de la matriz B
    cout << "\nIngrese los elementos de la matriz B:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
        

    // Suma de matrices
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < columnas; ++j)
            C[i][j] = A[i][j] + B[i][j];

    // Mostrar la matriz resultante
    cout << "\nMatriz resultante (A + B):\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
