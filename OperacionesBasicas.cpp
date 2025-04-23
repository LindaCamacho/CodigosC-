#include <iostream>
using namespace std; 

const int s = 2;

void mostrarMatriz(int matriz[s][s]){
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++){
            cout << matriz[i][j] << " "; 
        }
        cout << endl; 
    }
}

void sumarMatrices(int A[s][s], int B[s][s], int resultado[s][s]) {
    for (int i = 0; i < s; ++i)
        for (int j = 0; j < s; ++j)
            resultado[i][j] = A[i][j] + B[i][j];
}

void restar(int A[s][s], int B[s][s], int resultado[s][s]) {
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++ ){
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplicar(int A[s][s], int B[s][s], int resultado[s][s]) {
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++ ){
            resultado[i][j] = A[i][j] * B[i][j];
        }
    }
}

int main() {
    int A[s][s] = {{1, 2}, {3,4}}; 
    int B[s][s] = {{5 ,6}, {7, 8}}; 
    int resultado[s][s]; 

    cout <<"Matriz A:\n"; 
    mostrarMatriz(A); 

    cout << "Matriz B: \n";
    mostrarMatriz(B); 

    sumarMatrices(A, B, resultado); 
    cout << "\nSuma de A y B\n";
    mostrarMatriz(resultado); 
    
    restar(A, B, resultado); 
    cout << "\nResta de A y B\n";
    mostrarMatriz(resultado); 

    multiplicar(A, B, resultado); 
    cout << "\nMultiplicación  de A y B\n";
    mostrarMatriz(resultado); 

    return 0; 
}