// Escriba un programa que permita calcular la suma de los “n” primeros números impares positivos.

#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0;
    cout << "Ingrese el número de impares a sumar: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        suma += 2 * i - 1;
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}