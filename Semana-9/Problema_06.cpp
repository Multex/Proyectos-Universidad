// Escribir un programa que permita calcular el área de un círculo, el proceso se repite hasta que el usuario pulsa la tecla N al diálogo desea continuar (S/N)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio;
    char respuesta;

    do {
        cout << "Ingrese el radio del círculo: ";
        cin >> radio;
        cout << "El área del círculo es: " << M_PI * pow(radio, 2) << endl;
        cout << "Desea continuar (S/N): ";
        cin >> respuesta;
    } while (tolower(respuesta) == 's');

    return 0;
}