#include <iostream>
using namespace std; 

int main(){
    int n, suma = 0, i = 1; 

    cout << "Ingresa un número: ";
    cin >> n; 

    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "La suma de los números del al " << n << " es: " << suma << endl;
    return 0;
}