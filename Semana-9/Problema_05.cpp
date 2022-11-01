// Escribir un programa que determine si un número es primo. 

#include <iostream>
using namespace std;

int main() {
    int n;
    bool esPrimo = true;

    cout << "Ingrese un número: ";
    cin >> n;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo) {
        cout << n << " es primo" << endl;
    } else {
        cout << n << " no es primo" << endl;
    }

    return 0;
}