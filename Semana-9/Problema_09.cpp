// Escriba un programa que encuentre el máximo común divisor (mcd) de dos números por el método de Euclides.

#include <iostream>
using namespace std;

int main() {
    int a, b, r;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    cout << "El máximo común divisor es: " << a << endl;
    return 0;
}