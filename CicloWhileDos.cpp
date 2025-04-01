#include <iostream>
using namespace std; 

int main() {
    int n; 

    cout << "Ingresa un número positivo: ";
    cin >> n;
    
    while (n <= 0) {
        cout << "Eror. Ingresa un número positivo: ";
        cin >> n; 
    }

    cout << "Okis : " << n << endl;
    return 0; 
}