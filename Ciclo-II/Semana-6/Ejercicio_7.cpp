// Desarrolla un programa que lea 2 valores a, b y los intercambie. Por ejemplo si a=2 y b=5, el algoritmo debe hacer a=5 y b=2.

#include <iostream>

using namespace std;

int main () {
    int a, b, aux;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    aux = a;
    a = b;
    b = aux;

    cout << "El valor de a es: " << a << endl;
    cout << "El valor de b es: " << b << endl;
}