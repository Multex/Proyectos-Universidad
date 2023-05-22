// Escribir un programa que permita calcular la suma de los “n” primeros términos de la siguiente serie: 1/2+1/4+1/6 +...

#include <iostream>
using namespace std;

int main() {
    int n;
    float suma = 0;

    cout << "Ingrese el número de términos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += 1.0 / (2 * i);
    }

    cout << "La suma de los " << n << " primeros términos es " << suma << endl;
    return 0;
}