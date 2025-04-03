#include <iostream>
using namespace std; 

int main() {
    int n, c = 0;

    cout << "Ingresa un número positivo (+): ";
    cin >> n; 

    while (n > 0) {
        n = n / 10; 
        c++;
    }

    cout << "El número tiene " << c << " cifras" << endl;
    return 0;
}