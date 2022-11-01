// Escribir un programa que calcule los divisores comunes de dos números. 

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    if (a == 0 || b == 0) {
        cout << "No hay divisores comunes" << endl;
        return 0;
    }
    
    for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}