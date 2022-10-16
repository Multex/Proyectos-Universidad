// Escribir un programa que solicite al usuario la longitud y altura de una habitacion y a continuacion visualice su superficie con cuatro decimales.

#include <iostream>

using namespace std;

int main() {
    float longitud, altura, superficie;

    cout << "Ingrese la longitud: ";
    cin >> longitud;

    cout << "Ingrese la altura: ";
    cin >> altura;

    superficie = longitud * altura;

    cout << "La superficie es: " << superficie << endl;

    return 0;
}