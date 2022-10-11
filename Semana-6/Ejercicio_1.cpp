// Calcule la suma de los "n" primeros números naturales.

#include <iostream>

using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un número: ";
    cin >> n;

    suma = (n * (n + 1)) / 2;

    /* for (int i = 1; i <= n; i++) {
        suma += i;
    }
    */

    cout << "La suma de los " << n << " primeros números naturales es: " << suma << endl;

    return 0;
}